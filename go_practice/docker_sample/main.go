package main

import (
	"fmt"
  "os"
	"strings"
	"github.com/slack-go/slack"
)

//EV put new slack events
var EV *slack.MessageEvent

//RTM use for sending events to slack
var RTM *slack.RTM

//BotToken Put your slackbot token here
const BotToken string := os.Getenv("BOT_TOKEN")

//DefaultChannel Put your default channel
const DefaultChannel string = "#takecantik-go-practice"

func main() {
	var api *slack.Client = slack.New(BotToken)

	RTM = api.NewRTM()

	go RTM.ManageConnection()

	for msg := range RTM.IncomingEvents {
		switch ev := msg.Data.(type) {
		case *slack.ConnectedEvent:
			fmt.Printf("Start connection with Slack\n")
		case *slack.MessageEvent:
			EV = ev
			ListenTo()
		}
	}
}

//ListenTo excute functions under suitable conditions
func ListenTo() {
	switch {
	case strings.Contains("こんにちは", EV.Text):
		RTM.SendMessage(RTM.NewOutgoingMessage("こんにちは。", EV.Channel))
		return
	}
}

