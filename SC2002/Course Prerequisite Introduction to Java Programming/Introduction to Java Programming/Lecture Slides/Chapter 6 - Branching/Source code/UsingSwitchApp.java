import java.util.Scanner;
public class UsingSwitchApp 
{
 	public static void main(String[] args) 
 	{
   		char choice;
 	  	int num1, num2, result;
		Scanner sc = new Scanner(System.in);

 	  	System.out.println("Select an arithmetic operation:");
    	System.out.println("A) Addition");
    	System.out.println("S) Subtraction");
    	System.out.println("M) Multiplication");
		System.out.print("Your choice (A, S or M) => ");
   		//String input = sc.next();
		choice = sc.next().charAt(0); 
		System.out.print("Enter the first integer: ");
    	num1 = sc.nextInt();
		System.out.print("Enter the second integer: ");
    	num2 = sc.nextInt();

    	switch (choice) {
      	case 'a':
      	case 'A':
        	result = num1 + num2;
        	System.out.println(num1 + " + " + num2 + " = " + result);
        	break;
      	case 's':
      	case 'S':
        	result = num1 - num2;
        	System.out.println(num1 + " - " + num2 + " = " + result);
        	break;
      	case 'm':
      	case 'M':
        	result = num1 * num2;
        	System.out.println(num1 + " * " + num2 + " = " + result);
        	break;
      	default:
        	System.out.println("Not a proper choice!");
    }
  }

}

