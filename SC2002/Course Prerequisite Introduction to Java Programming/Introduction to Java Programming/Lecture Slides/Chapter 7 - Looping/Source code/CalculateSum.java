import java.util.Scanner;
public class CalculateSum 
{
 	public static void main(String[] args)
	{
  	 	int sum=0, item;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the list of integers: ");
    	item = sc.nextInt();
  		while (item != -1)  /* sentinel loop controlled loop*/
		{
    		sum += item;
    		item = sc.nextInt();
 		}
  		System.out.println("The sum is " + sum);
 	}

}

