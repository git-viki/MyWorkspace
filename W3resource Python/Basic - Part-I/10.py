# 10. Write a Python program that accepts an integer (n) and computes the value of n+nn+nnn.

# n = int(input("enter a number = "))
# n1 = n+n
# n2 = n+n+n
# result = (n+n1+n2)
# print(result)

# a = int(input("Input an integer : "))
# n1 = int( "%s" % a )
# n2 = int( "%s%s" % (a,a) )
# n3 = int( "%s%s%s" % (a,a,a) )
# print (n1+n2+n3)

n = input("input the value of n : ")
n1 = n
n2= 2*n1
n3= 3*n1
print(int(n1) + int(n2) + int (n3))