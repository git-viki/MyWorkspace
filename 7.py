#7. Write a Python program that accepts a filename from the user and 
#   prints the extension of the file.

file = input("input file name with extension = ")
extension = file.split(".")
print("the extension of the input file is = " , extension[-1])