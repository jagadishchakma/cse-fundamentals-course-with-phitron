# recursion function in python
def count(p1):
    print(p1)
    if p1 == 10:
        return
    count(p1+1)
count(0)