import java.util.Scanner;
public class prime 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Please insert any number : ");
		int num = sc.nextInt();
		boolean flag = true;
		for (int i = 2; i<num; i++) // loop to check if the number is composite
		{
			if (num%i==0)
			{
				flag = false;
				break;
			}
		}
		if(flag)
			System.out.println(num+" is a prime number");
		else
			System.out.println(num+" is a composite number");
	}
}
