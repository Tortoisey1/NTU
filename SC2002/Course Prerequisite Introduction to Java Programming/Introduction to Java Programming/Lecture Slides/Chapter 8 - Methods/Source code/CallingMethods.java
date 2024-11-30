public class CallingMethods 
{
	public static void main(String[] args)
	{
		double dist; 				// local variables 
		double x = 2.0, y = 4.5; 	// local variables 
		double a = 3.0, b = 5.5;	// local variables 

		dist = distance(2.0, 4.5); 	// actual parameters 
		System.out.println("The distance is " + dist);
		dist = distance(x * y, a * b); // actual parameters 
		System.out.println("The distance is " + dist);
	}
	public static double distance(double x,double y)
	{         				// x,y - formal parameters
		return Math.sqrt(x * x + y * y);
	}
}


