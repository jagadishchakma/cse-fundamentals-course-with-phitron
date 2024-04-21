# python class and objects
class Person:
    age = []
    def __init__(self,uname,uage,ulook):
        self.uname = uname
        self.uage = uage
        self.ulook = ulook
    def say_hello(self,gender):
        print(f"Hi, {self.uname}. How are you? {gender}")
jagadish = Person("Jagadish Chakma", 28,"Black")

jagadish.say_hello("Male")
print(jagadish.age)

namita = Person("Namita Chakma",39,"White")
print(namita.age)