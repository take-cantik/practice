package main

import (
  "encoding/json"
  "io"
  "io/ioutil"
  "log"
  "net/http"
  "os"
  "fmt"
  "flag"

  "github.com/joho/godotenv"
  "github.com/slack-go/slack"
)

func main() {
  envErr := godotenv.Load(fmt.Sprintf("./%s.env", os.Getenv("GO_ENV")))
  if envErr != nil {
    panic(envErr)
  }
  slackBotToken := os.Getenv("SLACK_BOT_TOKEN")
  api := slack.New(slackBotToken)
  _ = api

  var ( singingSecret string )
  flag.StringVar(&singingSecret, "secret", os.Getenv("SLACK_SINGING_SRCRET"), "Your Slack app's signing secret")
  flag.Parse()

  http.HandleFunc("/slash", func(w http.ResponseWriter, r *http.Request) {
    log.Println("ahiahi")
    verifier, err := slack.NewSecretsVerifier(r.Header, singingSecret)
    if err != nil {
      w.WriteHeader(http.StatusInternalServerError)
      return
    }

    r.Body = ioutil.NopCloser(io.TeeReader(r.Body, &verifier))
    s, err := slack.SlashCommandParse(r)
    if err != nil {
      w.WriteHeader(http.StatusInternalServerError)
      return
    }

    if err = verifier.Ensure(); err != nil {
      w.WriteHeader(http.StatusUnauthorized)
      return
    }

    switch s.Command {
      case "/tech":
        params := &slack.Msg{Text: s.Text}
        b, err := json.Marshal(params)
        if err != nil {
          w.WriteHeader(http.StatusInternalServerError)
          return
        }

        w.Header().Set("Content-Type", "application/json")
        w.Write(b)

      default:
        w.WriteHeader(http.StatusInternalServerError)
        return
    }
  })

  log.Println("[INFO] Server listening")
  if err := http.ListenAndServe(":8080", nil); err != nil {
    log.Fatal(err)
  }
}

