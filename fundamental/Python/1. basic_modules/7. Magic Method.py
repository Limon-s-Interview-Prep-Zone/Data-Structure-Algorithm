class Point:
    def __init__(self, a, b):
        self.x = a
        self.y = b

    # Defines behavior for when str() is called on an instance of your class.
    def __str__(self):
        return f"{self.x},{self.y}"

    # Defines behavior for the equality operator, ==.
    def __eq__(self, other):
        return self.x == other.x and self.y == other.y

    # Defines behavior for the greater-than operator, >.
    def __gt__(self, other):
        return self.x > other.x and self.y > other.y

    # Implements addition.
    def __add__(self, other):
        return Point(self.x + other.x, self.y + other.y)

    def showDetails(self):
        print(f"point ({self.x},{self.y})")


point = Point(1, 2)
point1 = Point(1, 2)
point.showDetails()
print(point)
print(point > point1)
print(point1 + point)
