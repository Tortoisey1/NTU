import java.util.Scanner;
public class FactorialApp 
{
  	public static void main(String[] args) 
	{
  	 	int num, n; 
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a positive integer => ");
  	 	num = sc.nextInt();
  	 	n = fact1(num);
 	  	System.out.println("The factorial of " + num + " is " + n);
  	}
  	public static int fact1(int n) 
	{
 	  	int i;
  	 	int temp = 1;
   		for (i = n; i > 0; i--)
			temp *= i;
		return temp;
	}

}


