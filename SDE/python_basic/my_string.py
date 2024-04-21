# string with double quotation
uname = "Jagadish Chakma"
print(uname)

# string with single quotation
country = "Bangladesh"
print(country)

# multi line string with three double quotation
details = """
uname: Jagadish Chakma
country: Bangladesh
age:24
study: BBA
"""
print(details)

# multi line string with three single quotation
study = '''
jsc = 2012
ssc = 2015
hsc = 2017
bba = 2021
'''
print(study)

# string are like arrays
monitor = "msi pro 223"
print(monitor[2])
print(monitor[4])

# looping string like array
cpu = "ryzen 7 5700G"
for char in cpu:
    print(char, end="")

print()
# sting len getting
mobod = "gigabyte"
print(len(mobod))

# check string
dialuge = "Hello dear, I love python  coding"
print("loves" in dialuge)

# check string using if condition

mobile = "symophony market price"
if "tk" not in mobile:
    print("happy customer")
else:
    print("Not happy customer")

# slicing string
text1 = "Going to the college or scholl or university"
print(text1[::])
# slicing start to end
print(text1[3:12:])
# slicing from the start
print(text1[:23:])
# slicing from the end
print(text1[5::])

# slicing negative indexing
text2  = "             Hello World"
print(text2[-1:-int(len(text2))-1:-1])

# string uppercase
print(text2.upper())
# string lowercase
print(text2.lower())
# remove white space beftore and after
print(text2.strip())
# replace string
print(text2.replace("W","M"))
# split string
print(text2.split())
# string concatenation
print(text2 + " USA")

# string formatting
status = "I want to become a software {2} {1} a remote {0} holder"

l1 = "engineer"
l2 = "as"
l3 = "job"
print(status.format(l1,l2,l3))
