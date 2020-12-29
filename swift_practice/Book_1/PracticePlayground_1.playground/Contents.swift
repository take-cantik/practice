//print(1 + 1)
print(123.45 / 23)

var num = 2

num *= 21
print(num)

for i in 1...9 {
    for j in 1...9 {
        print(i * j)
    }
}

print("これは文字列です")
var moji = "文字列"
var tuika = "の追加"
print(moji + tuika)

let ahi = 1234

print("文字列の中に追加できるお\(ahi)")

//型を明示的に宣言できるお

var str:String = "ahiahi!"
var number:Int = 12
var pi:Double = 3.14
var big:Bool = true

if pi <= 3.5 {
    print("pipi")
} else if pi >= 2.1 {
    print("ahiahi")
} else {
    print("ahi")
}

var box = [1, 2, 3, 4, 5]
print(box[0])

box.append(23)
box.remove(at: 2)

for i in box {
    print(i)
}

var dic = ["ahiahi":1, "ahi":2, "ah":3]
print(dic)

dic["manji"] = 4
dic["ah"] = nil

print(dic)

func ahiahi() {
    print("aiueo")
    print("kakikukeko")
}

ahiahi()

func mawasu(hikisu:Int) {
    for i in 1...hikisu {
        print(i)
    }
}

var numnum:Int = 12

mawasu(hikisu:numnum)

func bmi(height:Double, weight:Double) {
    let heightMeter = height / 100
    let bmiNum:Double = weight / (heightMeter * heightMeter)
    print("BMIは\(bmiNum)です。")
}

bmi(height: 162, weight: 67)

func label(ahiahi ahi:Int) {
    print(ahi)
}

label(ahiahi: 12)

func primary(finishNumber num:Int) -> Bool {
    var isPrimary:Bool = true
    
    for i in 2...num - 1 {
        if num % i == 0 {
            isPrimary = false
        }
    }
    
    return isPrimary
}

print(primary(finishNumber: 13))
