import java.text.*;

public class FormattedOutput1 
{			
	public static void main(String[] args)
	{	
		int i = 123;
		short j = 123;
		long k = 123456789L;

		DecimalFormat numForm = new DecimalFormat("###");

		System.out.print("int i = ");
		System.out.println(numForm.format(i));
		System.out.print("short j = ");
		System.out.println(numForm.format(j));
		System.out.print("long k = ");
		System.out.println(numForm.format(k));
	}
}

