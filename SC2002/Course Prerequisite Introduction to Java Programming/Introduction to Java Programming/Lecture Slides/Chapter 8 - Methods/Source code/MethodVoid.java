import java.util.Scanner;
public class MethodVoid 
{
  	public static void main(String[] args) 
	{
	   	int n;
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a number: ");
 	  	n = sc.nextInt();
 	  	helloNTimes(n);
 	}
 	public static void helloNTimes(int n) 
	{
 	  	int count;
 	  	if (n <= 0) 
			return; 		// has a return statement
 	  	else 
   		  	for (count = 0; count < n; count++)
    				System.out.println("Hello!");
  }

}


