import java.util.Scanner;
public class LinearInterpolate 
{
	public static void main(String[] args) 
	{
		double x,y,x1,y1,x2,y2;	// coordinates of points
		double slope,intercept;	
		Scanner sc = new Scanner(System.in);

		// read the two points 
		System.out.print("Enter the first point x1 y1: ");
		x1 = sc.nextDouble();
		y1 = sc.nextDouble();
		System.out.print("Enter the second point x2 y2: ");
		x2 = sc.nextDouble();
		y2 = sc.nextDouble();
		System.out.print("Enter the x-coordinate of point: ");
		x = sc.nextDouble();

		// Calculate the slope, intercept and y-ccordinate 
		slope = (y2-y1)/(x2-x1);
		intercept = (y1*x2 - y2*x1)/(x2-x1);
		y = slope*x + intercept;

		// Print slope, intercept, y-ccordinate
		System.out.println("The slope is " + slope);
		System.out.println("The intercept is " + intercept);
		System.out.println("The y-coordinate is " + y);
	}
}				

