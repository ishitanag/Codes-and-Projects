#include <stdio.h> 
int sum(int num)
{
	if(num!=0)
       return (num%10 + sum(num/10));
   else
       return 0;
}
int main() { 
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	printf("Sum of the digits of the number is: %d",sum(n));
	return 0;
}
