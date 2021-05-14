import java.util.Scanner;
public class Employee 
{
	String name;
	int year_of_joining;
	double salary;
	String address;
	public void userinput () // function for taking the input from the user
	{
		Scanner sc = new Scanner (System.in); // creating object of Scanner class
		System.out.print("Enter the name of the employee : ");
		name = sc.nextLine();
		System.out.print("Enter the year of joining of the employee : ");
		year_of_joining = Integer.valueOf(sc.nextLine());
		System.out.print("Enter the salary of the employee : ");
		salary = Double.valueOf(sc.nextLine());
		System.out.print("Enter the address of the employee : ");
		address = sc.nextLine();
	}
	public void display () // function to display the employee's info 
	{
		System.out.println(name+"\t\t"+year_of_joining+"\t\t"+salary+"\t"+address);
	}
	public static void main (String[] args) // main method to create an object of the Employee class
	{
		Employee obj[] = new Employee[3]; // object of the Employee class
		for (int i=0;i<3;i++) 
		{
			obj[i] = new Employee();
			obj[i].userinput();
		}
		System.out.println("Name \t Year of joining \t Salary \t Address");
		for (int i=0;i<3;i++) 
		{
			obj[i].display();
		}
		
	}
}
