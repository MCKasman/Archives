# creating a class
class Person:
    pass

# creating an object
p = Person()
print(p)    # prints the register location of the object

# creating functions within a class
class Person:
    def getName(self):  # 'self' passes itself through a class's parameters
        print("Michael")
    def getAge(self):
        print("16")

p = Person()
print(p.getName()) # prints 'Michael'
print(p.getAge())  # prints '16'

# creating parameters within a class
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def getName(self):
        print("Your name is " + self.name)
    def getAge(self):
        print("Your age is " +self.age)

p1 = Person("Bob", "22")    # if you do not pass variables for 'name' and 'age' then there will be an error
print(p1.getName())