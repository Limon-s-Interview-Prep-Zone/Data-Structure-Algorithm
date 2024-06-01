from datetime import date


# Class method: when we dont need any exiting object we use class method
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    @classmethod
    def calculateAge(cls, name, birthYear):
        return cls(name, date.today().year - birthYear)

    def showDeatils(self):
        print("Hello " + self.name + "'s age is: " + str(self.age))


person = Person("limon", 25)
person.showDeatils()
person1 = Person.calculateAge("limon", 1993)
person1.showDeatils()
