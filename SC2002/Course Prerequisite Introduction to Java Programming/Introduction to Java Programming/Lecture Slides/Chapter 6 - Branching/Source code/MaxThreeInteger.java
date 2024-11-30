import java.util.Scanner;
public class MaxThreeInteger 
{
  public static void main(String[] args) 
  {
   	int n1, n2, n3, max;
	Scanner sc = new Scanner(System.in);

	System.out.print("Enter 1st integer: ");
   	n1 = sc.nextInt();
	System.out.print("Enter 2nd integer: ");
   	n2 = sc.nextInt();
	System.out.print("Enter 3rd integer: ");
   	n3 = sc.nextInt();
   	if (n1 >= n2)
   	{
     	if (n1 >= n3) 
        	max = n1;
      	else 
        	max = n3;
    }
    else if (n2 >= n3) 
      	max = n2;
    else 
      	max = n3;
    System.out.println("The maximum is " + max);
  }

}

