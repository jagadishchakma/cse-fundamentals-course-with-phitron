#parent class
class CommonPerson:
    def __init__(self,fname,lname,height,age) -> None:
        self.fname = fname
        self.lname = lname
        self.height = height
        self.age = age
    def full_name(self):
         
        print(f"{self.fname} {self.lname}")
    def get_age(self):
        print(self.age)
    def get_height(self):
        print(self.height)

#child class
class Person(CommonPerson):
    def __init__(self, fname, lname, height, age) -> None:
        super().__init__(fname, lname, height, age)
    def hoby():
        print("I love working on coding")

#objects
jagadish = Person("Jagadish","Chakma", "5.4",27)
namita = Person("Namita", "Chakma", "5.0",28)
jagadish.full_name()
namita.full_name()