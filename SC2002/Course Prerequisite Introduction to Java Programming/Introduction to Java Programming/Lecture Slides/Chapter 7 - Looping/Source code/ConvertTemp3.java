import java.util.Scanner;
public class ConvertTemp3 
{
 	public static void main(String[] args) 
	{
  	 	double fahren, celsius;
  		double tempLimit;	
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the conversion limit (F): ");
   		tempLimit = sc.nextDouble();
    	System.out.println("\tFahrenheit\tCelsius");
    	System.out.println("\t----------\t-------");
    	fahren = 32.0;
    	do	{
			celsius = (fahren - 32.0) * 5.0/9.0;
			System.out.println("\t " + fahren + "\t\t" + celsius);
  	    	fahren += 10;
    	} while (fahren <= tempLimit); 
  	}

}


