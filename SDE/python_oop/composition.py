# python composition
class Person:
    def __init__(self,type) -> None:
        self.type = type

class Bideshi:
    def __init__(self,type,fname,lname,age) -> None:
        self.fname = fname
        self.lname = lname
        self.type = Person(type)

# object make
paris = Bideshi("Male", "Paris", "Chakma", 30)
print(paris.type.type)