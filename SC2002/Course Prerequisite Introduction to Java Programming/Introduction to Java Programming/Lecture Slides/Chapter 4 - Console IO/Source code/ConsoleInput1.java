import java.util.Scanner;
public class ConsoleInput1 
{			
	public static void main(String[] args)
	{	

		int data1, data2, data3;
		double real1, real2;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter three integers: "); 
		data1 = sc.nextInt();
		data2 = sc.nextInt();
		data3 = sc.nextInt();
		
		System.out.print("The two integers are: "); 
		System.out.println(data1 + " " + data2 + " " + data3); 

		System.out.print("Enter two doubles: "); 
		real1 = sc.nextDouble();
		real2 = sc.nextDouble();
		System.out.print("The two doubles are: "); 
		System.out.println(real1 + " " + real2); 

	}								
}

