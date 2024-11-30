// import java library classes
// google "java api spec" to view available classes in JDK
// Scanner class is most commonly used class to get console input and others..(check API Spec)
import java.util.Scanner;

class Factorial   // class name - file name must be same as class name
{
	// for a start, use "public static" when defining your methods (function)
	// "public static" make the method global just like 'C'
	// when you have learnt OO, you will use LESS of static
   public static int getFact(int n) {

	// below syntax is no different from what you would write in 'C' (which you have learnt)
      int c, fact = 1;
      if ( n < 0 )
         // instead of using printf in 'C' use System.out.println(String)
         System.out.println("Number should be non-negative.");
      else
            for ( c = 1 ; c <= n ; c++ )
            fact = fact*c;
      return fact ;
   }

   // entry into a Java program - in 'C' is int main()
   public static void main(String args[])
   {
      int n = 1;

      System.out.print("Enter an integer to calculate it's factorial > ");
      Scanner in = new Scanner(System.in);
      n = in.nextInt();
      // "System.out.println" uses "+" to concatenate (join) String and other variable data
      System.out.println("Factorial of "+ n + " is = " + getFact(n));
   }
}