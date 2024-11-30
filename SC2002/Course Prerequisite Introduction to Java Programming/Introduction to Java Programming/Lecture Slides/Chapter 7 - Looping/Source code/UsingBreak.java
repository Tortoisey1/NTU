import java.util.Scanner;
public class UsingBreak 
{
 	public static void main(String[] args) 
	{
  		double length, width;
		double area=100.0;
		Scanner sc = new Scanner(System.in);
		
    	while (area > 50.0) {
			System.out.print("Enter length of rectangle: ");
  			length = sc.nextDouble();
			if (length < 5.0)
				break;
			System.out.print("Enter width of rectangle: ");
      		width = sc.nextDouble();
			if (width < 5.0)
				break;
			area = length*width;
     		System.out.println("The area = " + area);
    	}
  	}

}


