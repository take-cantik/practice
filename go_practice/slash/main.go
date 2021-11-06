package main

import (
  // "encoding/json"
  // "io/ioutil"
  "log"
  "net/http"
  "os"
  "fmt"
  // "strings"

  "github.com/joho/godotenv"
  "github.com/slack-go/slack"
  // "github.com/slack-go/slack/slackevents"
)

func main() {
  envErr := godotenv.Load(fmt.Sprintf("./%s.env", os.Getenv("GO_ENV")))
  if envErr != nil {
    panic(envErr)
  }
  slackBotToken := os.Getenv("SLACK_BOT_TOKEN")
  api := slack.New(slackBotToken)
  _ = api

  http.HandleFunc("/tech", func(w http.ResponseWriter, r *http.Request) {
    log.Println("ahiahi")
  })

  log.Println("[INFO] Server listening")
  if err := http.ListenAndServe(":8080", nil); err != nil {
    log.Fatal(err)
  }
}

