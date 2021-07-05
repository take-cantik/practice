# ”Hello World!”を出力してください
print("No.1")

print("Hello World!")

# 入力値に1足して出力してください
print("No.2")

num = input()
print(num + 1)

# 円の半径を入力し、その円の面積を出力してください
print("No.3")

r = input()
print(r * r * 3.14)

# 整数の入力値が偶数だったら1、奇数だったら0を出力してください
print("No.4")

num = input()
print(num % 2 == 0)

# 入力値の絶対値を出力してください
print("No.5")

num = input()
if num > 0:
  print(num)
else:
  print(num * -1)

# 身長[m]、体重[kg]を入力して、BMIが18.5未満で「痩せ」18.5以上25未満で「普通」、25以上で「肥満」>    を出力してください
print("No.6")

height = input()
weight = input()
bmi = weight / (height * height)

if bmi < 18.5:
  print("痩せ")
elif bmi >= 25:
  print("肥満")
else:
  print("普通")

# 一つ目の入力値からふたつめの入力値までの総和を出力してください
print("No.8")
# 入力値の約数の総和を出力してください
print("No.9")
# 入力値以下の整数のうち最も約数の多い数を出力してください
print("No.10")
# 入力値が素数であれば1、そうでなければ0を出力してください
print("No.11")
# フィボナッチ数列の入力値番目の項の値を出力してください
print("No.12")
