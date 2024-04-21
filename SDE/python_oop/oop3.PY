def function1():
    print("I am from function 1")

def function2(p1):
    print("I am from function 2")
    p1()

function2(function1)