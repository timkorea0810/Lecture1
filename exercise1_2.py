class Temperature:
    unit = "Celsius"
    def __init__(self, value):
        self.value = value
    def display(self):
        print(self.value, Temperature.unit)
    @classmethod
    def change_unit(cls, new_unit):
        cls.unit = new_unit
    @staticmethod
    def to_fahrenheit(celsius):
        return celsius * 9 / 5 + 32

thing = Temperature(100)
thing.display()
print(thing.to_fahrenheit(100))
thing.change_unit("Kelvin")
thing2 = Temperature(373)
thing.display()
thing2.display()
# When a class variable is changed all instances in the class get affected