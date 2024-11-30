public class TestArray5
{
   public static void main( String[] args )
   {
	   int [] a = { 1 } ;
		int [] b = { 2 } ;

		a = b ;
		b[0] = 3 ;

		System.out.println( "a = " + a[0] );
		System.out.println( "b = " + b[0] );
   }
}
