import java.text.*;

public class TestIntegerOutput 
{			
	public static void main(String[] args)
	{	
		int i;
		
		DecimalFormat numForm1 = new DecimalFormat("000");
		i = 5;
		System.out.println("000 - int i = " + numForm1.format(i));
		i = 25;
		System.out.println("000 - int i = " + numForm1.format(i));
		i = 125;
		System.out.println("000 - int i = " + numForm1.format(i));
	
		DecimalFormat numForm2 = new DecimalFormat(",000");
		i = 125;
		System.out.println(",000 - int i = " + numForm2.format(i));
		i = 6125;
		System.out.println(",000 - int i = " + numForm2.format(i));

		DecimalFormat numForm3 = new DecimalFormat("###");
		i = 5;
		System.out.println("### - int i = " + numForm3.format(i));
		i = 25;
		System.out.println("### - int i = " + numForm3.format(i));
		i = 125;
		System.out.println("### - int i = " + numForm3.format(i));
	
		DecimalFormat numForm4 = new DecimalFormat("#,###");
		i = 125;
		System.out.println(",### - int i = " + numForm4.format(i));
		i = 6125;
		System.out.println(",### - int i = " + numForm4.format(i));

	}
}

