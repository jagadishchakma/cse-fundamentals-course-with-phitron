class Person:
    def getCity(self,city):
        print(city)

class Jaga(Person):
    def fullName(self,fname,lname,city):
        print(fname,lname)
        super().getCity(city)

p1 = Jaga()
p1.fullName("Jagadish","Chakma","rangamati")