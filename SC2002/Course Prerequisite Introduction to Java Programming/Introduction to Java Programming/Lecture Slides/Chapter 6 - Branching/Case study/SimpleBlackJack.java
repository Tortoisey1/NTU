import java.util.Scanner;
public class SimpleBlackJack 
{
	public static void main(String[] args) 
	{
		int card1=0, card2=0, card3=0;
		int total=0;
		char answer='y';
		Scanner sc = new Scanner(System.in);
			
		card1 = (int)(1 + Math.random()*13);
		if (card1 > 10)	
			card1 = 10;
		System.out.println("Your first card is: " + card1);
		card2 = (int)(1 + Math.random()*13);
		if (card2 > 10)	
			card2 = 10;
		System.out.println("Your second card is: " + card2);
		if ((card1 == 1 && card2 == 10) || 
				(card2 == 1 && card1 == 10)) 
		{
			System.out.println("Black Jack!");
			System.out.println("You Win");
		}
		else {
			total = card1 + card2;
			System.out.println("Your total is: " + total);
			System.out.println("Do you want another card? ");
			String ans = sc.next();
			answer = ans.charAt(0);
			if (answer == 'y' || answer == 'Y')
			{
				card3 = (int)(1 + Math.random() * 13);
				if (card3 > 10)
					card3 = 10;
				System.out.println("Your card is: " + card3);
				total += card3;
				System.out.println("Your total is: " + total);
			}
			if (total >= 16 && total <= 21) 
				System.out.println("You Win");
			else
				System.out.println("You lose");
		}
	}

}					

