filename=input('Enter a filename: ')
f_split = filename.split(".")
extension = f_split[-1]
dict1 = {"py":"python", "txt":"text", "java":"java", "c":"C", "docx":"Document"}
str1 = ""
for key in dict1.keys():
    if extension == key :
        str1 = dict1[key]
print ("The extension of the file is:'", str1, "'")
