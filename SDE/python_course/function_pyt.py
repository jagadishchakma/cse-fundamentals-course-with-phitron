# define function in python
def my_func():
    print("Hello World")

# list as a parameter in python function
def friends(p1):
    for item in p1:
        print(item)

friends(["a","b","c","d","e","f","g","h"])

# python function arbitory keyword arguments example
def person(**kargs):
    for key,value in kargs.items():
        print(f"{key}={value}")

person(uname="John Doe",age=23,city="rangamati",village="bilaaychari")
