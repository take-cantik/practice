print("AHI")

m = "1234567890"
print(len(m))
print(m[4], m[-6])
print(m[4:7])

step = "あいうえおかきくけこさしすせそ"
print(step[2::3])
print(step[-2::-4])

mess = "{0}は{1}を{2}いる"
print(mess.format("私", "あなた", "愛して"))

s = "{0:6}"
print(s.format(123))
print("右詰め")
print(s.format("abc"))
print("左詰め")

fav = "尾関。菅井。鈴本。"
print(fav)
print(fav.replace("。", "卍、"))

keyakiO = ["石森 虹花", "今泉 佑唯", "上村 莉菜",
          "尾関 梨香", "織田 奈那","小池 美波",
          "小林 由依", "齋藤 冬優花", "佐藤 詩織",
          "志田 愛佳","菅井 友香", "鈴本 美愉",
          "長沢 菜々香", "長濱 ねる", "土生 瑞穂",
          "原田 葵", "平手 友梨奈", "守屋 茜",
          "米谷 奈々未", "渡辺 梨加", "渡邉 理佐"]
print(keyakiO)

keyakiN = ["井上 梨名", "関 有美子", "武元 唯衣",
           "田村 保乃", "藤吉 夏鈴", "松田 里奈",
           "松平 璃子", "森田 ひかる", "山崎 天"]
print(keyakiN)

print(keyakiO[4:20:4])
print("推し")
print(keyakiO[3],keyakiO[9],keyakiO[10],keyakiO[11],keyakiO[16])
print(len(keyakiO))

keyakiO.remove("今泉 佑唯")
keyakiO.remove("志田 愛佳")
keyakiO.remove("長濱 ねる")
keyakiO.remove("米谷 奈々未")
print("現欅メン")
print(keyakiO + keyakiN)

kyz = "&".join(keyakiO + keyakiN)
print(kyz)
print(kyz.split("&"))

kan = [120, 134, 3684, 23678]
for k in kan:
    print(k)
    print(k * 1.1)
    print(int(k * 1.1))

mamama = 105
if mamama > 100:
    print("true")
elif mamama < 100:
    print("false")
else:
    print("manji")

tuple_sample1 = (1, 2, 3, 4, 5)
tuple_sample2 = tuple_sample1 + (6, 7, 8, 9)
print(tuple_sample2)
tuple_sample3 = tuple_sample2[6:8:1]
print(tuple_sample3)
tuple_sample4 = (7, 8)
print(tuple_sample3 == tuple_sample4)

def kansu(x):
    if x > 100:
        print("100より大きい")
    elif x < 100:
        print("100より小さい")
    else:
        print("100やで")

kansu(mamama)
mamama -= 10
kansu(mamama)
mamama += 5
kansu(mamama)

print(int("100"))
print(type(int("100")))
print(int("100,000".replace(",", "")))

print(float("3.14"))
print(type(float("3.14")))
print(float(".345678"))

print(int("100101", 2))
print(int("80", 9))
print(int("FFFF", 16))

print(float("1.23e-4"))
print(float("1.23e4"))

float_str = "ー１．２３４"
print(float(float_str.replace("ー", "-").replace("．", ".")))

import unicodedata
print(unicodedata.numeric("五"))
print(type(unicodedata.numeric("五")))
print(unicodedata.numeric("百"))
print(type(unicodedata.numeric("百")))
print(unicodedata.numeric("兆"))
print(type(unicodedata.numeric("兆")))
print("一文字でないとエラー")

'''これがそうなのか'''

class Human:
    def search(self, place):
        pass

    def take(self, food):
        self.food = food

    def open_mouth(self):
        pass

    def eat(self):
        print(self.food + "を食べました。")

hito = Human()
hito.take("Banana")
hito.eat()

class HumanName:
    def setName(self, name):
        self.name = name

    def getName(self):
        return self.name

otake = HumanName()
otake.setName("おたけ")
print(otake.getName())

charu = HumanName()
charu.setName("やんちゃる")
print(charu.getName())
print(charu.name)

print("あいうえお")
