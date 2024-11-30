public class TestWrapperClass
{
 	public static void main(String[] args) 
 	{

		// autoboxing
		Integer numObject1;
		int num1 = 888;
		numObject1 = num1;

		// unboxing 
		Integer numObject2 = new Integer(888);
		int num2;
		num2 = numObject2;

		System.out.println(num2);
	}
}

