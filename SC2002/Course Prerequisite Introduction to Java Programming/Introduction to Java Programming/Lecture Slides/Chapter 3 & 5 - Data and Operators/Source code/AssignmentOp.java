public class AssignmentOp 
{			
	public static void main(String[] args)
	{	
		double account, grossSalary, taxRate;
		
		
		account = 115678.9;
		grossSalary = 100000.0;
		taxRate = 0.2;
	
		account = account - grossSalary*taxRate;
		System.out.println("Your new account balance is " + account);
	}
}

