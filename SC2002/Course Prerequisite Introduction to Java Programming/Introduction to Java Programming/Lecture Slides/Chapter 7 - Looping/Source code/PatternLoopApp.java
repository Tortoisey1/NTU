import java.util.Scanner;
public class PatternLoopApp 
{
	public static void main(String[] args) 
	{
  		int a, b, height, lines;
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the height of a pattern: ");
    	height = sc.nextInt();
    	for (lines = 1; lines <= height; lines++) 
		{
      		for (a = 1; a <= (height-lines); a++) 
    	    	System.out.print(' ');
   		    for (b = 1; b <= (2 * lines -1); b++) 
    	     	System.out.print('*');
    		System.out.println();
    	}
  	}

}


