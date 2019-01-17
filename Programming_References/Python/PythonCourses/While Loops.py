# while executions: break (stops loop), continue (skips loop iteration and continues the loop), pass (filler that does nothing)
c = 0;
while(c < 5):
    print(c);
    c = c + 1;

# break statement
c = 0;
while(c < 5):
    print(c);
    if(c == 3):
        break;
    c = c+1;

# continue function
c = 0;
while(c < 5):
    c = c + 1;
    print(c);
    if(c == 3):
        continue;

# pass function
c = 0;
while(c < 5):
    print(c);
    if(c ==3):
        pass;
    c = c+1;
