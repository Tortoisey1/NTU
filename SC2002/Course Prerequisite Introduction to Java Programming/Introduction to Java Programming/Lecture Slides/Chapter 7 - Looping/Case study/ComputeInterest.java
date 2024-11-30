import java.util.Scanner;
import java.text.*;
public class ComputeInterest 
{
 	static final double INTEREST_RATE = 0.95;
 	public static void main(String[] args) 
	{
  	  	double fund = 0.0, interest = 0.0;
  	  	int currentYear = 0, numOfYears = 0, totalYear = 0;
		int counter;
		Scanner sc = new Scanner(System.in);
		DecimalFormat numForm = new DecimalFormat(",###.00");

		System.out.println("Enter current year: ");
    	currentYear = sc.nextInt();
		System.out.println("Enter the fund for " + currentYear + ":");
    	fund = sc.nextDouble();
		System.out.println("Enter number of year: ");
    	numOfYears = sc.nextInt();
		System.out.println("The interest and fund are: ");
    	System.out.println("\tYear\tInterest\t  Fund");
    	System.out.println("\t====\t=========\t========");

    	totalYear = numOfYears + currentYear;

		for (counter=currentYear; counter<totalYear; counter++) 
		{
 	     	interest = fund * INTEREST_RATE;
  	    	fund += interest;
			System.out.println("\t" + counter + "\t" + numForm.format(interest) + "\t" + numForm.format(fund));
    	}
  	}

}						


