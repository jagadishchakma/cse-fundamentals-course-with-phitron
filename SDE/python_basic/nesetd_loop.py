num = int(input("Enter fact number: "))
last = 1
for i in range(1,num+1):
    last *= i
    print()
print(last)