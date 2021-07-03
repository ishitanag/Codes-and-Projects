#include <stdio.h> 
int main() { 
	int a, b;
	printf("Enter first number: ");
	scanf("%d" ,&a);
	printf("Enter second number: ");
	scanf("%d" ,&b);
	printf("The numbers before swapping are: a= %d and b= %d", a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n");
	printf("The numbers after swapping are: a= %d and b= %d", a, b);
	return 0;
}
