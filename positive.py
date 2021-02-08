lst1 = []
lst2 = []
num = int(input("Enter number of elements : "))  
for i in range(0, num):
   ele = int(input())
   lst1.append(ele)
for p in lst1:
   if p >= 0:
      lst2.append(p)
print (lst2)
