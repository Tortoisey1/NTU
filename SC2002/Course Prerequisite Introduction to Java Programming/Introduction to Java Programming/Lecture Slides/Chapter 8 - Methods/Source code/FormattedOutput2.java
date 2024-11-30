import java.text.*;

public class FormattedOutput2 
{			
	public static void main(String[] args)
	{	
		float f = 1234.5f;
		double d = 12345.678;
		double p = 0.88689;
		
		DecimalFormat numForm = new DecimalFormat("$,###.00");
		System.out.print("float f = ");
		System.out.println(numForm.format(f));
		System.out.print("double d = ");
		System.out.println(numForm.format(d));
		
		DecimalFormat percentForm = new DecimalFormat("0.00%");
		System.out.print("percentage p = ");
		System.out.println(percentForm.format(p));
	}
}

