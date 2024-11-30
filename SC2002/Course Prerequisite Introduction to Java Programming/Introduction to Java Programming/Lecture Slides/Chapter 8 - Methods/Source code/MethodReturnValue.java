import java.util.Scanner;
public class MethodReturnValue 
{
	public static void main (String[] args) 
	{
		int n;
		int num;
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a positive number: ");
		n = sc.nextInt();
		num = fact(n);
		System.out.println("The factorial of " + n + " is " + num);
	}
	public static int fact(int n) 
	{
		int temp = 1;

		if (n < 0) 
		{
			System.out.println("Error: no negative number.");
			return 0;
		}
		else if (n == 0)	// i.e. when n==0
			return 1;
		else
			for (; n > 0; n--)
				temp *= n;
		return temp;
	}

}


