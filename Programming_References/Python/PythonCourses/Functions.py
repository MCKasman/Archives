# must start function with 'def' and end with '():'
def HelloWorld():
    print("Hello World");

# calls the HelloWorld() function
HelloWorld();

# when passing variables, don't need to declare variable type
def Greeting(name):
    print("Hi " + name + "!");

Greeting("Avi");

# adding operation with a function
def Sum(numOne, numTwo):
    print(numOne + numTwo);

Sum(9, 10);

# initializing variables through functions
def ReturnAdd(numOne, numTwo):
    return(numOne + numTwo);    # after a 'return' statement, Python does not go to the next line of code

sum = ReturnAdd(2, 4);

print(sum);

