# how to loop through items in a list and tuples
list1 = ["Pen", "Pineapple", "Apple", "Pen"];
tup1 = {6, 12, 16, 36};

for i in list1: # for loop goes through all indexes of 'list1'
    print(i);   # 'i' is the index value and 'list1' is list variable

for i in range(0,11): # prints from 0 to 10
    print(i);

for i in range(0, 11, 2): # the 3rd digit, 2, in the parenthesis is the increment value of 'i' in the for loop
    print(i);             # will output even numbers from 0 to 10

