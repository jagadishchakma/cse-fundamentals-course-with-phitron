class Person:
    #default method
    def full_name(self,fname,lname):
        return f"{fname} {lname}"
    #class method
    @classmethod
    def get_age(self,age):
        return age
    #static method
    @staticmethod
    def get_city(city):
        return city
print(Person.full_name("a","Jagadish", "Chakma"))
print(Person.get_age(27))
print(Person.get_city("rangamati"))

p1 = Person()
print(p1.get_city("rangamati"))
