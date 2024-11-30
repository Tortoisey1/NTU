import java.util.Scanner;
public class ConditionOperator 
{
	public static void main(String[] args) 
	{
   		double ledVoltage, resistorVoltage, sourceVoltage;	
   		double circuitCurrent, resistorValue;
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter source voltage (volts) => ");
	   	sourceVoltage = sc.nextDouble();
		System.out.print("Enter resistor value (ohms) => ");
 	  	resistorValue = sc.nextDouble();
		ledVoltage = (sourceVoltage<4.5) ? sourceVoltage : 4.5;
		resistorVoltage = sourceVoltage - ledVoltage;
		circuitCurrent = resistorVoltage / resistorValue; 
		System.out.println("Total circuit current = " + circuitCurrent + " amperes");
	}

}


