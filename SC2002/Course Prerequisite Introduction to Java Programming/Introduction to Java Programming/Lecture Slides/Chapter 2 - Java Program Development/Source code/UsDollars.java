/**Testing*/
import java.util.Scanner;
public class UsDollars
{			
	public static void main(String[] args) 
	{	
		double amtUsDollars, amtSingDollars, exchangeRate;
		Scanner consoleIn = new Scanner (System.in);
	
		System.out.println("Enter the amount of US dollars:"); 
		amtUsDollars = consoleIn.nextDouble();
		System.out.println("Enter the exchange rate:"); 
		exchangeRate = consoleIn.nextDouble();
		amtSingDollars = amtUsDollars * exchangeRate; 
		System.out.println(amtUsDollars + " US dollars = " +  amtSingDollars + " Singapore dollars");
	}	
}
