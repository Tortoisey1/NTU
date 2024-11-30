
public class NestedStrings 
{
 	public static void main(String[] args) 
	{
  		char i, j; 				// for-loop counters 
    	int num = 0; 			// overall loop counter 

    	System.out.println("The strings generated are: ");
    	for (i = 'a'; i <= 'c'; i++)  		// outer loop 
		{
 	  	  	for (j = 'a'; j <= 'c'; j++)  	// inner loop 
			{
 		      	num++;
   		     	System.out.print(i + "" + j + " ");
   		   	}									// end inner loop 
   		  	System.out.println();
    	}										// end outer loop 
		System.out.print("A total of " + num + " different strings are formed.");
  	}

}


