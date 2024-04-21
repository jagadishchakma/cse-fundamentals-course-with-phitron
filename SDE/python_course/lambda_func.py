# python lambda function
x = lambda a,b,c: a+b+c
print(x(5,5,3))

# why use lambda function

def my_func(a):
    return lambda n : a*n

my_result = my_func(2)
print(my_result(4))

# python lambda function

fullName = lambda fname,lname : f"{fname} {lname}"
print(fullName("jagadish","chakma"))
