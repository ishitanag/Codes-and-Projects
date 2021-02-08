def most_frequent(string):
   frequency = {}
   for i in string:
      if i in frequency:
         frequency[i] += 1
      else:
         frequency[i] = 1
   sorted_dict = dict( sorted(frequency.items(), key=lambda item: item[1], reverse=True))
   print(sorted_dict)
   
s = input("Please input a string: ")
most_frequent(s)
