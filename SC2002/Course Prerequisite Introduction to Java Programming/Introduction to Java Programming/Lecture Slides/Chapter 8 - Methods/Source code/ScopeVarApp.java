public class ScopeVarApp 
{
	private static int var = 10;	
								// this var has class scope

	public static void main(String[] args)
	{
		int var = 5;			// this var has block scope

		System.out.println("var = " + var);
	}
}


