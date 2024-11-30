import java.util.Scanner;
import java.text.*;
public class StudentStatApp 
{
 	public static void main(String[] args) 
	{
		double average, percentPass, percentFail, mark, totalMarks;
    	int semester, year;
    	int numOfStudent = 0;
    	int passes, failures;
		Scanner sc = new Scanner(System.in);
    	DecimalFormat numForm = new DecimalFormat("##.00");

    	// Read semester and year and initialize variables 
    	System.out.println("Enter the Semester : ");
    	semester = sc.nextInt();
    	System.out.println("Enter the Year: ");
    	year = sc.nextInt();
    	totalMarks = passes = failures = 0;

    	// Input and process the marks 
	   	mark = 0.0;
		System.out.println("Enter the mark (-1 to end): ");
 	  	mark = sc.nextInt();
 	  	while (mark != -1)
  	 	{
    	  	totalMarks += mark;
    	  	numOfStudent++;
   		   	if (mark < 50)
   		     	failures++;
   		   	else
      		  	passes++;
			System.out.println("Enter mark (-1 to end): ");
    	  	mark = sc.nextInt();
    	}

    	// Compute the statistics 
		average =(double)totalMarks/(double)numOfStudent;
		percentPass =(double)passes/(double)numOfStudent*100;
		percentFail =(double)failures/(double)numOfStudent*100;

    	// Print the statistics 
		System.out.println("For semester " + semester + " and year " + year);
		System.out.println("The average mark = " + numForm.format(average));
		System.out.println("The number of passes = " + passes);
		System.out.println("The number of failures = " + failures);
		System.out.println("The passing rate  = " +  numForm.format(percentPass) + "%");
		System.out.println("The failure rate  = " +  numForm.format(percentFail) + "%");
	}

}			


