# find largest number between three numbers
num1 = int(input("Number 1: "))
num2 = int(input("Number 2: "))
num3 = int(input("Number 3: "))

if num1 > num2 and num1 > num3:
    print("largest number is ", num1)
elif num2 > num1 and num2 > num3:
    print("largest number is ", num2)
else:
    print("largest number is ", num3)
    