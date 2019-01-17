# to create a list you use '[]'
students = ["Michael", 18, "Nicky", 5, "Baymax", 10];

# to create a dictionary you use '{}'
students = {"Michael": 18, "Nicky": 5, "Baymax": 10}

print("Age of Michael:", students["Michael"]);
print("Age of Nicky:", students["Nicky"]);
print("Age of Baymax:", students["Baymax"]);

# how to change key values in a dictionary
students["Nicky"] = 15;
print("New age of Nicky:", students["Nicky"]);

# how to delete a dictionary key (del)
del students["Baymax"];
print(students);

# how to get the length of the number of keys in a dictionary (len())
print(len(students));

# name dictionary keys differently, don't use same key names
# python will output the last value of the same key name
students = {"Clone": 1337, "Clone": 7567, "Clone": 2224};

print(students["Clone"]); # will print out '2224' since it is the value of the same last key name