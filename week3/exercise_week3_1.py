from abc import ABC, abstractmethod
import math

# TODO: Write code for Shape3D with concrete and abstract methods.
class Shape3D:
    # TODO: Write code for volume method.
    @abstractmethod
    def volume(self): pass
    # TODO: Write code for surface_area method.
    @abstractmethod
    def surface_area(self): pass
    # TODO: Write code for describe method. You can simply print out the instance\'92s class name and its parameter(s).
    def describe(self):
        print(self.__class__.__name__)
   

# TODO: Write code for subclass Cube.
class Cube(Shape3D):
    # TODO: Complete the initializer method.
    def __init__(self, side):
        self.side = side
    # TODO: Write code for volume method.
    def volume(self):
        return self.side**3
    # TODO: Write code for surface_area method.
    def surface_area(self):
        return  6 * self.side**2
    

# TODO: Implement subclass Sphere
class Sphere(Shape3D):
    # TODO: Complete the initializer method.
    def __init__(self, radius):
        self.radius = radius
    # TODO: Write code for volume method.
    def volume(self):
        return 4 / 3 * math.pi * self.radius**3
    # TODO: Write code for surface_area method.
    def surface_area(self):
        return 4 * math.pi * self.radius**2


# TODO: Implement subclass Cylinder
class Cylinder(Shape3D):
    # TODO: Complete the initializer method.
    def __init__(self, radius, height):
        self.radius = radius
        self.height = height
    # TODO: Write code for volume method.
    def volume(self):
        return math.pi * self.radius ** 2 * self.height
    # TODO: Write code for surface_area method.
    def surface_area(self):
        return 2 * math.pi * (self.radius ** 2 + self.radius * self.height)


# TODO: Instantiate three different objects.
shapes = [Cube(2), Sphere(3), Cylinder(2, 5)]

for s in shapes:
    s.describe()
    print("Volume:", s.volume())
    print("Surface area:", s.surface_area())
    print("---")
