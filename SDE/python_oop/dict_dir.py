class Person:
    # class attribute
    age = 90
    gfname = "Namita Chakma"
    friends = []
    # Instance attribute
    def __init__(self,fname,lname,city,village) -> None:
        self.fname = fname
        self.lname = lname
        self.city = city
        self.village = village
        self.friends.append(village)
    def getAge(self):
        print(self.age)
    def get_gf_name(self):
        print(self.gfname) 

jagadish = Person("Jagadish", "Chakma", "rangamati", "bodhipur")
namita = Person("Namita", "Chakma", "rangamati", "bilaychari");



print(jagadish.__dict__)
print(namita.__dict__)
print(dir(jagadish))
print(dir(namita))