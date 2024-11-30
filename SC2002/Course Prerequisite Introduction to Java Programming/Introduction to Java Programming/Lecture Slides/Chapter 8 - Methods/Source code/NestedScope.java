public class NestedScope 
{
	public static void main(String[] args) 
	{ 
							// begin block 1
		int i = 10;

		i += 10;
		System.out.println("Variable i in block 1 = " + i);
  		{  					// begin block 2 
			int j = 10;
			System.out.println("Variable i in block 2 = " + i);
			System.out.println("Variable j in block 2 = " + j);
  		}					// end block 2 
		int j = 50;
		System.out.println("Variable i in block 1 = " + i);
		System.out.println("Variable j in block 1 = " + j);
	}						// end block 1 
}


