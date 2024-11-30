public class DeclareVariable {
	// Constants
	static final int DEDUCTION = 2000; 
	static final double TAX_RATE = 0.2;     
	public static void main(String[] args){ 
		// Variables
		double incomeTax, taxableIncome, grossSalary; 
		int numOfDependents, numOfChildren, numOfParents;

		// Assignment statements
		numOfChildren = 2;          
		numOfParents = 2;
		grossSalary = 100000.0;
		numOfDependents = numOfChildren + numOfParents;
		taxableIncome = grossSalary - numOfDependents*DEDUCTION;
		incomeTax = taxableIncome * TAX_RATE;
		System.out.println("The income tax is " + incomeTax);
	}
}

