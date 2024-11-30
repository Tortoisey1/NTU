import java.util.Scanner;
public class ConsoleInput 
{			
	public static void main(String args[])
	{	
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter your name: "); 
		String name = sc.nextLine();
		System.out.print("Enter your age: "); 
		int age = sc.nextInt();
		// sc.nextLine();
		System.out.print("Enter your gender: ");
		// need to flush the contents before reading the next line 
		// String gender = sc.nextLine();
		String gender = sc.next();
		System.out.print("Enter your height: "); 
		double height = sc.nextDouble();

		System.out.println("Hello! ");
		System.out.println("Your name is " + name);
		System.out.println("Your age is " + age);
		System.out.println("Your gender is " + gender);
		System.out.println("Your height is " + height);
	}								
}

