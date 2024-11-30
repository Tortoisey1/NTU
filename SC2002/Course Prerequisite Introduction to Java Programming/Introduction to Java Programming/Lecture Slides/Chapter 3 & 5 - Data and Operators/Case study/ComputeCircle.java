  /*
  Date: 22 Jan 2007
  Author: XYZ
  Purpose: a test
  */
   import java.util.Scanner;

    public class ComputeCircle {
      static final double PI = 3.14159; 		// Constant 
       public static void main(String[] args)
      {
         double radius, area, circumference;
         Scanner sc = new Scanner(System.in);
      
      // Read the radius of the circle 
         System.out.print("Enter the radius: ");
         radius = sc.nextDouble();
      
      // Calculate the area 
         area = PI * radius * radius;
      
      // Calculate the circumference 
         circumference = 2 * PI * radius;
      
      // Print the area and circumference of the circle
         System.out.println("The area is " + area);
         System.out.println("The circumference is " + circumference);
      }
   }						

