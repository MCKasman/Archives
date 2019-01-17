# absolute value function
print(abs(34))  # prints 34
print(abs(-50)) # prints 50

# boolean functions
print(bool(0))  # the value of 0 always returns 'false'

print(bool(1))  # the value of 1 or any other number that is not 0 is always 'true'

print(bool(None))   # boolean value of 'None' is 'false'

# dir is a function that shows the possible functions that can be used for a certain variable
print(dir("hello"))

# help function defines the operation of a function
sent = "hello"
print(help(sent.upper)) # 'sent' is the variable name and 'upper' is the function utilized

# eval() function used for 1 line of code
sent = 'print("Hi")'
eval(sent)

# exec() function used for multiple lines or a block of code
exec(sent)

# how to change the data-type of variables
a = 1   # 'a' is an integer value

print(str(a))   # converts 'a' into a string
print(float(a)) # converts 'a' into a float
print(int(a))   # converts 'a' into an int

