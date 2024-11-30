import java.util.Scanner;
public class FindDigit 
{
	public static void main(String[] args)
	{
		int number;
  		int position;
		Scanner sc = new Scanner(System.in);

  		System.out.println("Enter a positive number: ");
  		number = sc.nextInt();
		System.out.println("Enter digit position from right:");
    	position = sc.nextInt();
		System.out.println("The digit value is " + digitValue(number, position));
	}
	public static int digitValue(int number, int position)
 	{
 		int pos = 0, digit = 0;
    	while (pos < position)
   		{
    		pos++;
     	 	digit = number%10;
  		   	number /= 10;
  	 	}
  		return digit;
 	}

}					


