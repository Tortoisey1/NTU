import java.util.Scanner;
public class InventoryControl 
{
	public static void main(String[] args)	
	{
		int quantity, quantitySold;
		double percentSold;
		Scanner sc = new Scanner(System.in) ;

		// read initial quantity and quantity sold
		System.out.println("======NTU Book Store======");
		System.out.println("Item: Introduction to Java Programming");
		System.out.println("==========================");
		System.out.print("Enter initial quantity: ");
		quantity = sc.nextInt();
		System.out.print("Enter quantity sold: ");
		quantitySold = sc.nextInt();

		// calculate percetage sold and available quantity
		percentSold = ((double)quantitySold/(double)quantity) * 100;
		quantity -= quantitySold;

		// print percentage sold and available quantity 
		System.out.println("Percentage sold: " + percentSold);
		System.out.println("Available quantity: " + quantity);
	}

}		

