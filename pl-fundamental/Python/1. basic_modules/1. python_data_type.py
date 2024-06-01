""" #data type
x = "limon"
print(type(x))
# data type number
# int, float, complex
a = 12
b = 12.4
c = 11j
formatter = "a={0} \t b={1}\t c={2}"
print(formatter.format(a, b, c))
#String Function
s = "   hello limon  "
print("length:", len(s))
print("Nth Charecter:", s[4])
print("Slice:", s[4:7])
print("negative index:", s[-7:-2])
print(s[-7]) """
# strip() remove white spaces
# lower() make lowercase
# upper() make uppercase
# replace() replace with new value
# split("") get substring
# in or not in filter in a string
# boolean
# bool() return true or false,bool(0) return false; except 0 it will return true.
# isinstance() check object an integer
"""operators"""
# & and operator
# | OR operator
# ^ XOR operator
# ~ NOT operator
# << left shift
# >> right shift
"""list"""
# llist=["red","yellow","green"]
# append(value)
# insert(index,value)
# remove(value)
# pop() remove last item
# pop(index) remove selected item
# del llist[index] remove specific index
# llist.clear() empty the list
# llist.copy() copy list
# list(llist) copy llist
# join list=> llist1+llist2 or llist1.extend(llist2)
# list((value...)) create list using list constructor
# llist.reverse() reverse the llist
# llist.sort() shorting the list
# llist.count(value) count the value
"""tuple"""
# ttuple=("red","yellow","green")
# you can not remove item from tuple
# del ttuple delete the tuple completely
# join tuple => ttuple1+ttuple2
# ttuple.count(value) count the value of number of times ocour in tuple
# ttuple.index(8) the first occurrence of the value 8, and return its position
#len(ttuple)
#tuple((value...)) use constuctor to create tuple
"""Set"""
# set1={"red","yellow","green"}
# set1=set(("red","yellow","green"))
# len(set1) get the length
# set1.add(value)
# set1.remove(value) remove the value
# set1.discard(value) remove the value
#set1.pop() remove the last element
# set1.clear() empty the set
# del set1 delete the set completely
# Join set=> set1.union(set2) or set1.update(set2) or set1+set2
# set2=set1.copy()
###set difference
# set1.difference(x)
# set1.difference_update(x)
# set1.intersection(x)
# set1.intersection_update(x)
# set1.symmetric_difference(x)
# set1.symmetric_difference_update(x)
# set1.isdisjoint(x)
# set1.issubset(x)
# set1.issuperset(x)
"""Dictionary"""
# dict1={ "brand": "Ford","model": "Mustang","year": 1964}
#dist1=dict(model="xyz",year=2012)
# dict1.clear() clear dictionaries
# dict1.pop(key, value?) removes the specified item from the dictionary.
# dict1.popitem() remove last item from dictionaries
# del dict1["key"] remove seleced key
# del dict1 delete dictionary completely
# dict1.update({key:value....key_n:value_n})
# dict2=dict1.copy() copy
# dict2=dict(dict1) copy
####accessing item
# dict1["model"] get model
# dict1.get("model") get model
# dict1["year"]=2020 change value
# dict1["newKey"]="new value" create new value
# dict1.key() return all keys
# dict1.setdefault(key:value) set default values
""" for x in dict1:
        print(x) #return all key
    
    for x in dict1:
        print(dict1[x]) #return all value
    for x in dict1.values():
        print(x) #return all value
    
    for x,y in dict1.items():
        print(x,y) #return key value pair
    
"""
"""
# if-elif-else
a = input("Enter a number:")
b = input("Enter a number:")
c = input("Enter a number:")
if (a > b and a > c):
    print("A gretter than B and")

elif (b > a and b > c):
    print("B gratter than a and c")
else:
    print("c gretter than A and B ")

print("A") if (a > b) else print("B")"""
# loop
""" #for loop
# range(startingValue, endValue, increment/decrement)
llist = ["red", "yellow", "blue"]
ddict = {"name": "limon", "Id": 1, "Dept": "BCSE"}
for x, y in ddict.items():
    print(x, y)
i = 1
for x in llist:
    if (x == "yellow"):
        continue
    print(x)
else:
    print("Finished for-loop")

for x in range(10, 100, 10):
    print("Number:\t", x) """
""" #while loop
i = 1
while i < 10:
    print("i:", i)
    i += 1
else:
    print("number exit") """
