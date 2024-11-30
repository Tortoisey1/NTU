// output using the prinf() method
public class UsingPrintf 
{			
	public static void main(String[] args)
	{	

		int num1 = 125;
		
		System.out.printf("%d\n", num1);		
		System.out.printf("%+6d\n", num1);		
		System.out.printf("%-6d\n", num1);

		double num2 = 12.345678;
		
		System.out.printf("%f\n", num2);		
		System.out.printf("%+11.5f\n", num2);		
		System.out.printf("%-11.5f\n", num2);		
		System.out.printf("%1.4f\n", num2);		
		System.out.printf("%+12.3e\n", num2);		
		System.out.printf("%-12.3e\n", num2);		


	}
}

