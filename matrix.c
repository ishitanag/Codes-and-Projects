#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r = 3, c = 3, i, j, sum;
 	sum = 0;
 	
    int **arr = (int **)malloc(r * sizeof(int *));
    for (i=0; i<r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));
         
    printf("Input elements in the matrix :\n");
    
    for (i = 0; i <  r; i++){
      for (j = 0; j < c; j++){
	    printf("element - [%d],[%d] : ",i,j);
	    scanf("%d",&*(*(arr+i)+j));
	  }
	}
	
	printf("\nThe matrix is : \n");
	
    for(i=0;i<r;i++){
    	printf("\n");
    	for(j=0;j<c;j++){
    		printf("%d\t",*(*(arr+i)+j));
    		if (i==j)
    			sum+=*(*(arr+i)+j);
        }
    }
    
    printf("\n\nThe sum of the diagonal elements is %d\n",sum);
}
