public class ScopeOfVariables 
{
	private static int classVar = 10;	
							// classVar has class scope

	public static void main(String[] args)
	{
		int localVar = 5;	// localVar has block scope

		System.out.println("main(): classVar= " + classVar);
		System.out.println("main(): localVar= " + localVar);
		method1();
		System.out.println("main(): classVar= " + classVar);
		System.out.println("main(): localVar= " + localVar);
	}
	public static void method1()
	{
		int localVar;		// localVar has block scope

		localVar = 50;
		classVar += localVar;
		System.out.println("method1(): classVar= " + classVar);
		System.out.println("method1(): localVar= " + localVar);
	}
}


