from abc import ABC, abstractmethod
class Person(ABC):
    @abstractmethod
    def height(self):
        pass

class Man(Person):
    @abstractmethod
    def fullName(self,flname):
        pass
    def height(self,height):
        print(height)
    def age(self,age):
        print(age)

   

class Jagadish(Man):
    def fullName(self,flname):
        print(flname)

jaga = Jagadish()
jaga.fullName("Jagadish Chakma")