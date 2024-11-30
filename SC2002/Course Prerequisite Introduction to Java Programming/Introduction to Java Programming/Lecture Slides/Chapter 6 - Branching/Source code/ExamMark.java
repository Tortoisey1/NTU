import java.util.Scanner;
public class ExamMark 
{
 	public static void main(String[] args) 
	{
   		int mark;
		Scanner sc = new Scanner(System.in);

		System.out.print("Give your examination mark => ");    
    	mark = sc.nextInt();
   		if (mark >= 80) 
    		System.out.println("You scored A in examination");
		System.out.println("Your mark is " + mark);
	}

}

