public class MethodOverLoading 
{
	public static void main(String[] args){
		int x=10, y=20, z=5;
		double i=4.5, j=5.5;

		System.out.println("findMin(x,y) with int arguments = " + findMin(x,y));
		System.out.println("findMin(i,j) with double arguments = " + findMin(i,j));
		System.out.println("findMin(x,y,z) with int arguments = " + findMin(x,y,z));
	}
	public static int findMin(int num1, int num2){
		if (num1 < num2)
			return num1;
		else 
			return num2;
	}
	public static double findMin(double num1, double num2){
		if (num1 < num2)
			return num1;
		else 
			return num2;
	}
	public static int findMin(int num1, int num2, int num3){
		return findMin(findMin(num1,num2), findMin(num2,num3));
	}
}

