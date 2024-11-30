import java.util.Scanner;
public class RDivideApp 
{
	public static void main(String[] args) 
	{
		int quotient;
 	  	int x,y;
		Scanner sc = new Scanner(System.in);

	   	System.out.print("Enter two numbers: ");
   		x = sc.nextInt();
   		y = sc.nextInt();
  	 	quotient = divide(x, y); 
  	 	System.out.println( x + "/" + y +" = " + quotient);
  	}
  	public static int divide(int num1, int num2) 
	{
  		if (num1 < num2) 
			return 0;
    	else 
			return 1 + divide(num1 - num2,num2);
	}

}


