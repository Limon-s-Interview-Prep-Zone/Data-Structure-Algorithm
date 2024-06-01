class Person:
    #  class level attribute are shared accross all the instances of the class.
    classvariable = "i am class variable"

    # constructor
    def __init__(self, id, name):
        self.id = id
        self.name = name

    # instance method
    def display(self):
        f = "Id: {0} Name: {1}"
        print(f.format(self.id, self.name))
        print("Name", self.name, "id:", self.id)


# class level attribute are dynamic
Person.department = "BCSE"
p1 = Person(1, "limon")
print("Department:", p1.department)
p1.display()
p2 = Person(2, "Likhon")
p2.id = 100
p2.display()
print(p2.classvariable)
