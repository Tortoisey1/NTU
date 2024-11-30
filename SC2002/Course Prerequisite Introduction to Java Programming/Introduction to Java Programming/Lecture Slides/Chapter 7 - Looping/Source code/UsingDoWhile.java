import java.util.Scanner;
public class UsingDoWhile 
{
 	public static void main(String[] args) 
	{
  	 	int input; 		/* User input number. */
		Scanner sc = new Scanner(System.in);
		do {
			System.out.print("Input a number (1 to 5): ");
			input = sc.nextInt();
			if (input > 5 || input < 1) 
			{
				System.out.print(input + "is out of range! ");
				System.out.println("Try again.");
			}
		} while (input > 5 || input < 1);
    	System.out.println("Input = " + input);
  	}

}


