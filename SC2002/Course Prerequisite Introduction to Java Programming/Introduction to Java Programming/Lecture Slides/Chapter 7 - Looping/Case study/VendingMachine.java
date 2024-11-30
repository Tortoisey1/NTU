import java.util.Scanner;
public class VendingMachine 
{
 	public static void main(String[] args) 
	{
    	int option = 4;
    	double drinkCost = 0.0, change = 0.0;
    	char coins = ' ';
    	double amount;
		Scanner sc = new Scanner(System.in);

    	do {
   		  	System.out.println("\n- Vending Machine -");
   		   	System.out.println("1. Buy Beer ($3.00)");
   		   	System.out.println("2. Buy Coke ($1.00)");
   		   	System.out.println("3. Buy Green Tea ($5.00)");
 	     	System.out.println("========================");
   		   	option = sc.nextInt();
    	  	if (option < 1 || option > 3) 
			{
				System.out.println("Invalid Option! Select 1-3");
 		       	option = sc.nextInt();
    	  	}
 	    } while (option < 1 || option > 3);
 		if (option == 1) drinkCost = 3.0;
   		else if (option == 2) drinkCost = 1.0;
      	else if (option == 3) drinkCost = 5.0;

		System.out.println("Please insert coins: ");
    	amount = 0.0;
    	System.out.println("Enter 'Q' - ten cents");
		System.out.println("Enter 'T' - twenty cents");
		System.out.println("Enter 'F' - fifty cents");
 	    System.out.println("Enter 'N' - one dollar");
 	    do {
 
  	    	String inputCoins = sc.next();
			coins = inputCoins.charAt(0);
     	 	switch (coins) 
			{
   	    	case 'Q': case 'q':
         		amount += 0.1; break;
        	case 'T': case 't':
       		   	amount += 0.2; break;
        	case 'F': case 'f':
     	     	amount += 0.5; break;
        	case 'N': case 'n':
     	     	amount += 1.0; break;
			default:
				System.out.println("Invalid Input!");
      		}
			System.out.println("You have entered: $" + amount);
    	} while (amount < drinkCost);
		if (amount > drinkCost)
		{
 			change = amount - drinkCost;
 			System.out.println("Change: $" + change);
		}
		System.out.println("Please collect your drink");
		System.out.println("Thank You for using the machine!");
	}

}	


