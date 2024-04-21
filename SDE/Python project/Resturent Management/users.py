# customer
# employee
# admin
from abc import ABC
class User(ABC):
    def __init__(self, name, email, phone, address) -> None:
        self.name = name
        self.email = email
        self.phone = phone
        self.address = address

class Employee(User):
    def __init__(self, name, email, phone, address, age, designation, salary):
        super().__init__(name,email,phone,address)
        self.age = age
        self.designation = designation
        self.salary = salary

# emp1 = Employee("jagadish chakma", "jagadishchakma401@gmail.com", 1608355518, "rangamati", 27, "staff", 24909)
# print(emp1.name)

class Admin(User):
    def __init__(self, name, email, phone, address) -> None:
        super().__init__(name, email, phone, address)
        self.employees = []
    def add_employee(self, name, email,phone, address, age, designation, salary):
        employee = Employee(name, email, phone, address, age, designation, salary)
        self.employees.append(employee)
        print(f"{employee.name} is added!!!")
    def view_employee(self):
        print("Employee list!!! ")
        for em in self.employees:
            print(em.name, em.email, em.phone, em.salary, em.designation)

adm  = Admin("Namita chakma", "namitachakma1@gmail.com", 4242312, "bilaychari")
adm.add_employee("Jotis chakma", "jotis@gmail.com", 9312, "rangamati", 28, "staff", 23442)
adm.view_employee()