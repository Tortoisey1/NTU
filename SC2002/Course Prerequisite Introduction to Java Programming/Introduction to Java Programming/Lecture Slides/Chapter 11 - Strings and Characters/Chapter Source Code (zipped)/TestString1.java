public class TestString1
{
   public static void main( String[] args )
   {
	   String str1 ;
		String str2 = new String( "Hello Class   " );

      // step2: try to uncomment this
      //str1 = new String();

      // step3: try to uncomment this instead
      //str1 = "";
		
		System.out.println( str2 );
		System.out.println( "[" + str2 + "]" );

      // step1: try to uncomment this
		//System.out.println( "[" + str1 + "]" );
   }
}

// Try these after defining str2
// but pay attention to the fact that String is immutable
//      str2 = str2.toLowerCase();
//      str2 = str2.substring( 0 , 5 );
