public class EvaluateExpressions 
{
	public static void main(String[] args) 
	{
    	boolean result;
		System.out.println("The results of logic relations:");
    	result = (3 > 7);
    	System.out.println("(3 > 7) is " + result);
    	result = (7 < 3) && (3 <= 7);
    	System.out.println("(7 < 3) && (3 <= 7) is " + result);
    	result = (7 < 3) && (7 / 0 <= 5);	// special case
    	System.out.println("(7 < 3) && (7/0 <= 5) is " + result);

    	result = (32 / 4 > 3 * 4) || (4 == 4);
    	System.out.println("(32/4 > 3*4) || (4 == 4) is " + result);
    	result = (4 == 4) || (32 / 0 == 0);	// special case
    	System.out.println("(4 == 4) || (32/0 == 0) is " +  result);
  	}
}

