import java.util.Scanner;
public class DiceNumberGenerator 
{  
	static final int MIN = 1;
	static final int MAX = 6;
	public static void main(String[] args) 
	{  
		int diceNumber1, diceNumber2, total;
		Scanner sc = new Scanner(System.in);

		System.out.println("Press a character to roll the " + "1st dice");
		String ch = sc.next();
		diceNumber1 = (int)(MIN + Math.random()* MAX); 
		System.out.println("The first dice number is: " + diceNumber1);
		System.out.println("Press a character to roll the " + "2nd dice");
		ch = sc.next();
		diceNumber2 = (int)(MIN + Math.random()* MAX);
		System.out.println("The second dice number is: " + diceNumber2);
		
		total = diceNumber1 + diceNumber2;
		System.out.println("Your total number is: " + total);
	}

}						

