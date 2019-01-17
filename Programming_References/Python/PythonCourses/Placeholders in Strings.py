# regular example of combining strings together
name = "Michael";
name + " is 18 years old";
# 'Michael is 18 years old'

# 1) single placeholder
sentence = "%s is 18 years old"; # '%s' for string placeholders

print(sentence%name);
#or
print(sentence%("Michael"));

# 2) multiple placeholders
sentence2 = "%s  %s is the President of the United States of America";
print(sentence2%("Donald", "Trump"));

# 3) different variable types placeholder
sentence3 = "%s is %d years old"; # '%d' for integer placeholders

#type 1
print(sentence3%("Michael", 18));

#type 2 (initialize sentence 3 to inputted placeholder values)
sentence3 = sentence3%("Michael", 18);
print(sentence3);