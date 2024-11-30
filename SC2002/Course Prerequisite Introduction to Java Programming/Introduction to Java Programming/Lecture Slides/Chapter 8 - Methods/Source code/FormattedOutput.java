import java.text.*;						// step 1

public class FormattedOutput {			
	public static void main(String[] args){	
										// step 2
		DecimalFormat numForm = new DecimalFormat("000"); 

		System.out.println(numForm.format(1));	// step 3
		System.out.println(numForm.format(12));
		System.out.println(numForm.format(123));
		System.out.println(numForm.format(1234));
	}
}

