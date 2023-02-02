# Variables and Types

# Numbers means integer (int)
myint=7
print(myint)

# Decimal Numbers means Floating point numbers (float)
myfloat=2.5
print(myfloat)

#String means Msg (str)
mystr="Vicky Kumar" 
print(mystr)

# operators
one=1
two=2
three=one + two   # 1+2
print(one)        #1
print(two)        #2
print(three)      # 3

str1='vicky '
str2='kumar'
str= str1 + str2
print("Hello Mr", str)

a,b=2,6
print(a,b)
print(b,a)
print(a+b)
print(a-b)
print(a*b)
print(a**b)
print(a/b)
print(a//b)

# ^ All Arithimatic operators 

# Exercise

'''

The target of this exercise is to create a string, an integer, and a floating point number. 
The string should be named mystring and should contain the word "hello". 
The floating point number should be named myfloat and should contain the number 10.0, and 
the integer should be named myint and should contain the number 20. 

'''

mystring="hello"
myfloat=10.0
myint=20

# testing code
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)
    
    