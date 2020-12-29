from linebot import (
    LineBotApi,
)
from linebot.exceptions import (
    InvalidSignatureError
)
from linebot.models import (
    MessageEvent, FollowEvent, JoinEvent,
    TextSendMessage, RichMenu, RichMenuSize,
    RichMenuArea, RichMenuBounds, MessageAction,
)
import os

#環境変数取得
LINE_CHANNEL_ACCESS_TOKEN = os.environ["LINE_CHANNEL_ACCESS_TOKEN"]
LINE_CHANNEL_SECRET = os.environ["LINE_CHANNEL_SECRET"]

line_bot_api = LineBotApi(LINE_CHANNEL_ACCESS_TOKEN)

#rich_menu_to_create = RichMenu(
#    size=RichMenuSize(width=2100, height=843),
#    selected=False,
#    name="Nice richmenu",
#    chat_bar_text="Tap here",
#    areas=[
#        RichMenuArea(
#            bounds=RichMenuBounds(x=19, y=225, width=677, height=602),
#            action=MessageAction(text="登録")
#        ),
#        RichMenuArea(
#            bounds=RichMenuBounds(x=715, y=225, width=680, height=602),
#            action=MessageAction(text="確認")
#        ),
#        RichMenuArea(
#            bounds=RichMenuBounds(x=1408, y=225, width=677, height=602),
#            action=MessageAction(text="削除")
#        )
#    ]
#)
#rich_menu_id = line_bot_api.create_rich_menu(rich_menu=rich_menu_to_create)
#
#print(rich_menu_id)

#with open("/Users/mikitakeru/works/practice/line_practice/test-richmenu/assets/images/test.png", 'rb') as f:
#    line_bot_api.set_rich_menu_image(os.environ["RICHMENU_ID"], "image/png", f)
line_bot_api.set_default_rich_menu(os.environ["RICHMENU_ID"])
