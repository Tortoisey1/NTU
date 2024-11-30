public class TestString2
{
   public static void main( String[] args )
   {
      // Wrapper class: wrap a primitive data
      Integer b = new Integer( 102   );
      Integer c = new Integer( "102" );

      // Wrapper class: class variable
      System.out.println( Integer.MAX_VALUE );

      // Wrapper class: class method
      String str = Integer.toString( 102 );
		
		// detail: http://java.sun.com/j2se/1.5.0/docs/api/java/lang/Integer.html
   }
}
