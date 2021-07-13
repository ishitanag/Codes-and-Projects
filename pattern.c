#include <stdio.h> 
int main() { 
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	int i, j;
	for (i=1; i<=n; i++)
	{
		 for(j=0;j<2*i;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	return 0;
}
