import java.util.Scanner;
public class SumPosNumbers 
{
  	public static void main(String[] args) 
	{
  	 	int i;
  	 	double data, sum = 0;
		Scanner sc = new Scanner(System.in);

  	  	// Read 8 numbers 
		System.out.print("Enter 8 numbers: ");
  	  	for (i = 0; i < 8; i++) 
  	  	{
  	    	data = sc.nextDouble();
  	    	if (data < 0.0) 
  	      	continue;
  	    	sum += data;
  	 	 }
		System.out.println("The sum is " + sum);
  	}

}


