import java.util.Scanner;
public class SumSeriesData 
{
  	public static void main(String[] args) 
	{
  		double x, temp = 1.0, term = 1.0;
  		int n, sign = 1, denom = 1;
		Scanner sc = new Scanner(System.in);

		System.out.print("Please enter the value of x: ");
    	x = sc.nextDouble();
    	for (n = 1; n <= 20; n++) 
		{
      		denom *= n;
      		sign = -sign;
     	 	term *= x;
      		temp += sign * term / denom;
    	}
    	System.out.println("The result is " + temp);
  	}

}


