class Person:
    def __init__(self, name) -> None:
        self.name = name
    def get_name(self):
        return self.name

a = Person("a person")
b = Person("b person")
c = Person("c person")

print(a.get_name())
print(b.get_name())
print(c.get_name())