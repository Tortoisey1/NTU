import java.util.Scanner;
public class CountingCoins 
{
 	public static void main(String[] args)
	{		
	int fiftyCents, twentyCents, tenCents, fiveCents;  
		int oneCent, totalCents;
    	int countedDollars, countedCents;
		Scanner sc = new Scanner(System.in);

		/* read the amounts on different types of coins */
    	System.out.print("Enter number of fifty cents: ");
    	fiftyCents = sc.nextInt();
		System.out.print("Enter number of twenty cents: ");
    	twentyCents = sc.nextInt();
    	System.out.print("Enter number of ten cents: ");
    	tenCents = sc.nextInt();
    	System.out.print("Enter number of five cents: ");
    	fiveCents = sc.nextInt();
    	System.out.print("Enter number of one cent: ");
    	oneCent = sc.nextInt();

		/* compute total value of coins into cents */
	 	totalCents = fiftyCents*50 + twentyCents*20 + tenCents*10 + fiveCents*5 + oneCent;

		/* convert total value into dollars and cents */
    	countedDollars = totalCents / 100;
 	 	countedCents = totalCents % 100;
    
		/* print the result */
    	System.out.println("The total value of your coins is " + countedDollars + " dollars and " + countedCents + " cents" );
  	}

}		

