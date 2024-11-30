import java.util.Scanner;
import java.text.*;
public class ConvertTemp 
{
 	public static void main(String[] args) 
	{
 	  	double fahren, celsius;
 	  	double tempLimit;
		DecimalFormat numForm = new DecimalFormat("000.00");
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the conversion limit (F): ");
    	tempLimit = sc.nextDouble();
    	System.out.println("\tFahrenheit\tCelsius");
    	System.out.println("\t----------\t-------");
 		fahren = 32.0;

 		while (fahren <= tempLimit) 
		{
			celsius = (fahren - 32.0) * 5.0/9.0;
  			System.out.println("\t " + numForm.format(fahren) + "\t\t" + 
  				numForm.format(celsius));
   			fahren += 10;
    	}
  	}

}

