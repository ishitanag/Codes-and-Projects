#include<stdio.h>
#include<string.h>

//Declaration of structure org
struct org
{
	char name[30], dept[30];
	int age, emp_id, salary, contact;
};
main()
{
	//declaration of org member as array
	struct org employee[20];
	int n,i;
	printf("\nEnter the number of employees in your organization:");
	scanf("%d",&n);

		//enter values using for loop
		for(i=0;i<n;i++)
		{
		printf("\nEnter Person %d\nEmployee Name :",i+1);
		scanf("%s",&employee[i].name);
		printf("\nEmployee Age :");
		scanf("%d",&employee[i].age);
		printf("\nEmployee Id :");
		scanf("%d",&employee[i].emp_id);
		printf("\nEmployee Department :");
		scanf("%s",&employee[i].dept);
		printf("\nEmployee Salary :");
		scanf("%d",&employee[i].salary);
		printf("\nEmployee Contact No. :");
		scanf("%d",&employee[i].contact);
		}
		
		//printing employee information
		printf("\nEmployees Information\n");
		printf(" Name \tAge \tEmployee ID \tEmployee Dept. \tEmployee Salary \tEmployee Contact No.");
		for(i=0;i<n;i++)
		{
			printf("\n%s \t%d \t%d \t%s \t%d \t%d",employee[i].name, employee[i].age, employee[i].emp_id, employee[i].dept, employee[i].salary, employee[i].contact);
		}

}
