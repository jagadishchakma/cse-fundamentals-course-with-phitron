# python function master code
# defined python function
def myFunc():
    print("I am print from the function.")

myFunc()

# parameter pass in python function
def user(uname,uage,ucity,ustudy):
    print(uname,uage,ucity,ustudy,end=" ")

user("Jagadish Chakma",27,"rangamati","BBA")
print()
user("Namita Chakma",27,"Bilaychari","BBS")
print()
# arbitari arguments in python function
def client(*args):
    print(args[3])
    for arg in args:
        print(arg)

client("USA","JOHN DOE",27,"Django project","12 dollar")

# arbitari keywords arguments in python function
def computer(**kargs):
    print(kargs["cpu"])
    print(kargs["ram"])
    print(kargs["storage"])
    print(kargs)
    for key,value in kargs.items():
        print(f"{key}={value}")
computer(cpu="ryzen 7 5700G", motherboard="Gigabyte", storage="512GB SSD", ram="16GB")


# default parameter in python function
def school(sname="None"):
    print(sname)
school("w3schools.com")
school()

# pass statement in python function
def coding():
    pass
print(coding())