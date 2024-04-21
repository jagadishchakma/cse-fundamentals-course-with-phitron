# python exception handling
try:
    print("Hello")
except:
    print("error")
else:
    print("nothing have error")
finally:
    print("code finished")


# raise an exception in python
x = 23
if not type(x) is str:
    raise TypeError("Only allow string")
