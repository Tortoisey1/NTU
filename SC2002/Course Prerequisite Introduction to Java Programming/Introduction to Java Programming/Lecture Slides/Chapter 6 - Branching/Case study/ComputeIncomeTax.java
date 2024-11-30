import java.util.Scanner;
public class ComputeIncomeTax 
{
	public static void main(String[] args) 
	{
		double grossIncome;
		int numOfChildren = 0, numOfParents = 0;
		double tax = 0.0, cpf = 0.0, taxIncome = 0.0;
		char parentStaying = 'y';
		double childRelief = 0.0;
		double parentRelief = 0.0;
		Scanner sc = new Scanner(System.in);
	
		// Read input data 
		System.out.println("Please enter your gross income: ");
		grossIncome = sc.nextDouble();
		System.out.println("Please enter your CPF: ");
		cpf = sc.nextDouble();
		System.out.println("Enter number of children: ");
		numOfChildren = sc.nextInt();
		System.out.println("Is parent living with you: ");
		String stay = sc.next();
		parentStaying = stay.charAt(0);
		System.out.println("Enter number of parents: ");
		numOfParents = sc.nextInt();
		
		// Compute tax relief for children
		if (numOfChildren <= 3)
			childRelief = numOfChildren * 2000;
		else if (numOfChildren >= 4)
			childRelief = (3*2000) + (numOfChildren-3) * 300;

		// Compute tax relief for parents
		if (parentStaying == 'Y' || parentStaying == 'y')
			parentRelief =	numOfParents * 5000;
		else 
			parentRelief = numOfParents * 3500;
		
		// Compute taxable income
		taxIncome = grossIncome - cpf - parentRelief - childRelief;

		// Compute tax payable
		if (0 < taxIncome && taxIncome <= 20000) 
      		tax = 0;
    	else if (20000 < taxIncome && taxIncome <= 30000) 
  	    	tax = 0 + 0.04 * (taxIncome - 20000);
    	else if (30000 < taxIncome && taxIncome <= 40000) 
 	     	tax = 400 + 0.06 * (taxIncome - 30000);
    	else if (40000 < taxIncome && taxIncome <= 80000) 
  	    	tax = 1000 + 0.09 * (taxIncome - 40000);
    	else if (80000 < taxIncome && taxIncome <= 160000) 
  	    	tax = 4600 + 0.15 * (taxIncome - 80000);
    	else if (160000 < taxIncome && taxIncome <= 320000) 
	      	tax = 16600 + 0.19 * (taxIncome - 160000);
    	else
  	    	tax = 47000 + 0.22 * (taxIncome - 320000);

		// Print tax payable 
		
    	System.out.println("childReielf: " + "$" + childRelief);
    	System.out.println("parentRelief: " + "$" + parentRelief);
    	System.out.println("taxIncome: " + "$" + taxIncome);   	
    	System.out.println("Your income tax is: " + "$" + tax);
  }

}						

