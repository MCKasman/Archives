# tuples are lists, except they cannot be editted
# if an edit is attempted, Python will output an error
# tuples have the same functions as lists

# to create a tuple, you use '()' instead of '[]' or '{}'
tup = ("Can't", "Touch", "This");
print(tup);

# can print out specific tuple index
print(tup[0]);
print(tup[0:3]);

# can concatenate tuples
tup2 = (12, 14);
tup3 = tup + tup2;
print(tup3);

# can delete & find length of tuples
del tup3;

len(tup);
