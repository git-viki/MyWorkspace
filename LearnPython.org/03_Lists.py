# Lists - it is data a data set 

mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
mylist.append(4)
print(mylist)
print(mylist[0])
print(mylist[1])
print(mylist[2])
print(mylist[3])
for x in mylist:
    print(x)

# append is using for insert a new elements in lists

# Exercise

'''
In this exercise, you will need to add numbers and strings to the correct lists 
using the "append" list method. You must add the numbers 1,2, and 3 to the "numbers" list, 
and the words 'hello' and 'world' to the strings variable.

You will also have to fill in the variable second_name with the second name in the names list, 
using the brackets operator []. Note that the index is zero-based, 
so if you want to access the second item in the list, its index will be 1.

'''
numbers=[]
strings=[]
numbers.append(1)
numbers.append(2)
numbers.append(3)
strings.append("hello")
strings.append("world")
print(numbers)
print(strings)
names=["fistname","second_name","thirdname"]
print("The second name in the name list is ",names[1])
print(names)
