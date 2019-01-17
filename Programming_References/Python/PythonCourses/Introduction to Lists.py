# initialize list
shopList = ["Chicken", "Ramen", "Crab", "Water"];

# how to print specific index of a list
print(shopList[0]);
print(shopList[0:3]); # prints a specific index range

# add items to the list with '.append()'
shopList.append("Milk");
print(shopList);

# del items from a list
del shopList[0];

# change index items in a list
shopList[0] = "Beef";
print(shopList);

# how to concatenate lists
shopList2 = ["Milk", "Eggs"];
shopList3 = shopList + shopList2;

# multiply items in a list
print(shopList * 2);

#find max integer value in a list
listNum = [1, 3, 7, 10, 36];

print(max(listNum));

# find min integer value in a list
print(min(listNum));

