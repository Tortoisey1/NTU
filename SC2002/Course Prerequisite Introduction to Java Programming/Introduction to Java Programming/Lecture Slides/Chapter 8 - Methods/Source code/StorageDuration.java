public class StorageDuration 
{
	private static int classVar = 5;	
							// classVar - static duration

	public static void main(String[] args)
	{
		method1(classVar);
	}
	public static void method1(int paraVar)
							// paraVar - automatic duration 
	{
		int localVar;		// localVar - automatic duration
		for (localVar = 0; localVar < paraVar; localVar++) {
		System.out.println("localVar = " + localVar + 
			" paraVar = " + paraVar);
		}
		System.out.println("localVar = " + localVar);
	}
}


