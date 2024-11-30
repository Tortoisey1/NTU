import java.util.Scanner;
public class ComputeMax 
{
	public static void main(String[] args) 
	{
   		int num1, num2, max;
		Scanner sc = new Scanner(System.in);

  		System.out.print("Enter the 1st number : ");
  		num1 = sc.nextInt();
  		System.out.print("Enter the 2nd number : ");
   		num2 = sc.nextInt();
   		if (num1 > num2) 
     		max = num1;
    	else 
      		max = num2;
    	System.out.println("The maximum of two integers is " + max);
  }
}

