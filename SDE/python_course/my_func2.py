# python function define
def fullName():
    print("Hello")

fullName()

# python function parameter define
def fullName2(fname,lname):
    print(fname,lname)

fullName2("John","Doe")
# python function arguments define
def fullName3(*args):
    for arg in args:
        print(arg)

fullName3("John", "Doe", 27, "USA", "New York")

# python function arbitari keywords arguments define
def fullName4(**kargs):
    for key,value in kargs.items():
        print(f"{key} = {value}")

fullName4(fname="John", lname="Doe", age=27, country="USA", city="New York")
