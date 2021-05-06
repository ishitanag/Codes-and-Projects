import java.util.Scanner;
public class conversion 
{
	public static void main (String args[])
	{
		Scanner sc = new Scanner(System.in);
		//taking user input
		System.out.println("Enter the number of minutes to be converted: ");
		int minutes = sc.nextInt();
		
		//conversion of minutes to year and days
		int years = minutes / 525600;
		int rem = minutes % 525600;
		int days = rem / 1440;
		
		System.out.println(minutes+ " minutes into number of years and days is approximately " +years+ " years and " +days+ " days");
	}
}
