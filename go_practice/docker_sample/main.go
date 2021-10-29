package main

import (
	"fmt"
  "os"
	"github.com/slack-go/slack"
  "github.com/joho/godotenv"
)

func main() {
  envErr := godotenv.Load(fmt.Sprintf("./%s.env", os.Getenv("GO_ENV")))
  if envErr != nil {
    panic(envErr)
  }

  //BotToken Put your slackbot token here
  var BotToken string = os.Getenv("BOT_TOKEN")
  
  //DefaultChannel Put your default channel
  var DefaultChannel string = os.Getenv("DEFAULT_CHANNEL")
  _ = DefaultChannel

  c := slack.New(BotToken)

  _, _, postErr := c.PostMessage("#takecantik-go-practice", slack.MsgOptionText("Hello World", true))
  if postErr != nil {
    panic(postErr)
  }
}

