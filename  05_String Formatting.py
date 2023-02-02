# String Formating 

# This prints out "Hello, Vicky!"
name = "Vicky!"
print("Hello,",name)

# This prints out: A list: [1, 2, 3]
mylist = [1,2,3]
print("A list: %s" % mylist)
print("A list: %s" % mylist[1])

# You will need to write a format string which prints out the data 
# using the following syntax: Hello John Doe. Your current balance is $53.44.

data = ("John", "Doe", 53.44)
format_string = "Hello %s %s. Your current balance is $%s."

print(format_string % data)