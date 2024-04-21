# python inner and outer function
def outside():
    print("I am from outside function")
    def inside():
        print("I am from inside function")
    return inside

outside()()

def my_func1(my_func0):
    print("My function 1")
    my_func0()

def my_func0():
    print("My function 0")

my_func1(my_func0)
