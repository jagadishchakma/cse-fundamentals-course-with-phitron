class MyClass:
    x = 5
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def __str__(self) -> str:
        return "this is default return string"
    def getFullName(self):
        print(self.name)

p1 = MyClass("Jagadish Chakma",27)
print(p1.x)
print(p1.name)
print(p1.age)
print(p1)
p1.name = "Namita Chakma"
del p1.name

p1.getFullName()