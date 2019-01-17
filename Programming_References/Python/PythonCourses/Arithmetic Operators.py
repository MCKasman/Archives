# initialize age variables
age1 = 12;
age2 = 18;

# addition
addition = age1 +age2;
print("Addition:", addition);

# subtraction
subtraction = age1 = age2;
print("Subtraction:", subtraction);

# multiplication
multiplication = age1 * age2;
print("Multiplication: ", multiplication);

# division
division = age1/age2;
print("Division: ", division);

#modulus (prints out remainder numbers divided)
modulus = age2%age1;
print("Modulus 1: ", modulus);

modulus2 = age1%age2;
print("Modulus 2: ", modulus2);



# how to concatenate string variables
firstName = "Michael";
lastName = "Kasman";


firstName + lastName; # regular concatenation


firstName + " " + lastName; # modified concatenation

# string splicing
sentence = "Michael was here";

sentence[0]; # ouputs char at index 0

# 1) splicing multiple indexes
sentence[0:7];
sentence[:7];

# 2) splicing backwards
sentence[:-2];

