public class PassByValue 
{
  public static void main(String[] args) 
  {
   	int num = 5;

   	num = add(num);
   	System.out.println("The value of num is " + num);
  }
  public static int add(int value) 
  {
	return ++value;
  }
}


