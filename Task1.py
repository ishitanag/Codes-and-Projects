#This program accepts the radius of a circle from the user and calculates the area based on the given radius.

radius = float(input("Input the radius of the circle:"))
area = 3.14 * (radius**2)
print ("The area of the circle with radius", radius, "is:" ,area)


#This program accepts the filename from a user and prints the extension of the given filename as the output.

filename=input('Enter a filename: ')
f_split = filename.split(".")
extension = f_split[-1]
dict1 = {"py":"python", "txt":"text", "java":"java", "c":"C", "docx":"Document"}
str1 = ""
for key in dict1.keys():
    if extension == key :
        str1 = dict1[key]
print ("The extension of the file is:'", str1, "'")
