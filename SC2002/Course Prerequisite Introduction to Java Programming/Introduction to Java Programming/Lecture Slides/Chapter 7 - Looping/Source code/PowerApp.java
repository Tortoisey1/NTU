import java.util.Scanner;
public class PowerApp 
{
 	public static void main(String[] args) 
	{
  		double x;
   		int y;
    	double power = 1.0;
		Scanner sc = new Scanner(System.in);

		System.out.println("Please enter x: ");
    	x = sc.nextDouble();
		System.out.println("Please enter y: ");
    	y = sc.nextInt();
    	if (x == 0.0) 
     	power = 0.0;
    	else if (y < 0) 
     		while	(y != 0) 
			{
        	power *= 1/x;
				y++;
			}
    	else 
			while (y != 0) 
			{
       			power *= x;
				y--;
			}
    	System.out.println("Result is " + power);
  	}

}


