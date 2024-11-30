import java.util.Scanner;
public class GuessingGame 
{
	static final int MAX_NUM = 13;
  	static final int MIN_NUM = 1;
	public static void main(String[] args) 
	{
  		int card1 = 0, card2 = 0;
    	int i;
    	char guess = ' ';
		Scanner sc = new Scanner(System.in);

		card1 = (int)(MIN_NUM + Math.random() * MAX_NUM);
		System.out.println("First card (1 and 13): " + card1);
  		for (i = 0; i < 5; i++) 
		{
    		System.out.println("Guess Higher(H) or Lower(L)");
 	      	String inputReply = sc.next();
			guess = inputReply.charAt(0);
       		card2 = (int) (MIN_NUM + Math.random() * MAX_NUM);
			System.out.println("Next card (1 and 13): "+ card2);
      		if ((card1 > card2 && guess == 'H') ||
      		 	(card1 < card2 && guess == 'L')) 
         	 	break;
      		card1 = card2;
   		}
   		if (i == 5)
    		System.out.println("You win");
   		else
     		System.out.println("You lose");
	}

}	


