#include <stdio.h> 
int main() { 
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	if (marks>=85)
		printf("Grade A");
	else if (marks>=70)
		printf("Grade B");
	else if (marks>=55)
		printf("Grade C");
	else if (marks>=40)
		printf("Grade D");
	else
		printf("Grade F");	
	return 0;
}
