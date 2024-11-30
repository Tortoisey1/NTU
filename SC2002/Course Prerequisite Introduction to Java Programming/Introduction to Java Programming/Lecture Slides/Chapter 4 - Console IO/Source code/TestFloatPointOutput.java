import java.text.*;

public class TestFloatPointOutput 
{			
	public static void main(String[] args)
	{	
		double d;

		
		DecimalFormat numForm1 = new DecimalFormat("000.00");

		d = 1234.6;
		System.out.println("000.00 - d = " + numForm1.format(d));

		DecimalFormat numForm2 = new DecimalFormat("000.##");	
		System.out.println("000.## - d = " + numForm2.format(d));
		
		d = 56.678;		
		DecimalFormat numForm3 = new DecimalFormat("###.00");
		System.out.println("###.00 - d = " + numForm3.format(d));		

		DecimalFormat numForm4 = new DecimalFormat("###.##");
		System.out.println("###.## - d = " + numForm4.format(d));	
		
			
		d = 1234.6;
		DecimalFormat numForm5 = new DecimalFormat(",000.00");
		System.out.println(",000.00 - d = " + numForm5.format(d));
				
							
		d = 234.6;
		DecimalFormat numForm6 = new DecimalFormat(",000.##");
		System.out.println(",000.## - d = " + numForm6.format(d));
				
		d = 3456.567;
		DecimalFormat numForm7 = new DecimalFormat(",###.00");
		System.out.println(",###.00 - d = " + numForm7.format(d));
					
		d = 456.567;
		DecimalFormat numForm8 = new DecimalFormat(",###.##");
		System.out.println(",###.## - d = " + numForm8.format(d));
				

	}
}

