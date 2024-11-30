import java.util.Scanner;
public class BankAccountApp 
{
	static final double INTEREST_RATE = 0.95;
	public static void main(String[] args) 
	{
		double deposits = 0.0;
    	double withdrawals = 0.0;
    	double interest = 0.0;
    	int accountNumber = 0;
    	double balance;
		Scanner sc = new Scanner(System.in);
	
    	System.out.println("Enter your account number: ");
    	accountNumber = sc.nextInt();
    	System.out.println("Enter current balance: ");
    	balance = sc.nextDouble();
    	System.out.println("Enter deposit: ");
    	deposits = sc.nextDouble();
    	System.out.println("Enter withdrawals: ");
		withdrawals = sc.nextDouble();

    	balance = deposit(deposits,balance);
    	balance = withdrawal(withdrawals,balance);
    	interest = computeInterest(balance);

		printResults(accountNumber, deposits, withdrawals, interest, balance);	
	}
  	public static double deposit(double amount, double bal) 
	{
   		bal += amount;
  	 	return bal;
  	}
  	public static double computeInterest(double amount) 
	{
    	return amount * INTEREST_RATE;
  	}
	public static double withdrawal(double amount, double bal) 
	{
    	bal -= amount;
    	return bal;
  	}
	public static void printResults(int number, double dep, double withdraw, double amount, double bal) 
	{
		System.out.println("Account number is: " + number);
    	System.out.println("Deposits: $" + dep);
    	System.out.println("Withdrawals: $" + withdraw);
    	System.out.println("Interest earned: $" + amount);
		System.out.println("Current balance is: $" + bal);
  	}
}
		

