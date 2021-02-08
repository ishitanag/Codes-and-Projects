n = int(input("Enter the number of terms: "))  
n1 = 0  
n2 = 1  
c = 0    
if n <= 0:  
   print (0)  
elif n == 1:   
   print (n1,",", n2)  
else:      
   while c < n:
       print(n1, end = ' ')
       nth = n1 + n2     
       n1 = n2  
       n2 = nth  
       c += 1
