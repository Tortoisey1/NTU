import java.util.Scanner;
public class FindHypotenuse 
{
	public static void main(String[] args) 
	{
 		int sideA, sideB, squareC;
		double hypotenuse;
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter side A: " );
		sideA = sc.nextInt();
		System.out.print("Enter side B: " );
		sideB = sc.nextInt();
		squareC = sideA*sideA + sideB*sideB;
		hypotenuse = Math.sqrt(squareC);
		System.out.println("The hypotenuse is " + hypotenuse);
	}

}

