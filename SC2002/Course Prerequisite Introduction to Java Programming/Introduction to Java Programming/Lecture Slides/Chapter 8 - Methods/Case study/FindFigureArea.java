import java.util.Scanner;
public class FindFigureArea 
{
	public static void main(String[] args)
	{
		int side, length, width;
		double base, height;
		Scanner sc = new Scanner(System.in);

   		System.out.print("Side of square: ");
   		side = sc.nextInt();
  	 	System.out.print("Length and width of rectangle: ");
   		length = sc.nextInt();
 	  	width = sc.nextInt();
 	  	System.out.print("Base and Height of triangle: ");
  	 	base = sc.nextDouble();
 	  	height = sc.nextDouble();

		System.out.println("The area of square is " + findArea(side));
		System.out.println("The area of rectangle is " + findArea(length, width));
		System.out.println("The area of triangle is " + findArea(base, height));
	}
	// compute area for a square
	public static int findArea(int squareSide) 
	{
		return squareSide * squareSide;
	}
	// compute area for a rectangle
	public static int findArea(int rectLength, int rectWidth) {
		return rectLength * rectWidth;
	}
	// compute area for a triangle
	public static double findArea(double triBase, double triHeight) 
	{
		return 0.5 * triBase * triHeight;
	}
}				


