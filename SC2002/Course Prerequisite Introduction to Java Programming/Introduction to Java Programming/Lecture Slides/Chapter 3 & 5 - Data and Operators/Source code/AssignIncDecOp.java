public class AssignIncDecOp 
{
	public static void main(String[] args) 
	{
		int num = 10, counter = 20;
		System.out.println("num = " + num + ", counter = " + counter);
		num++;
  		++counter;
    	System.out.println("num = " + num + ", counter = " + counter);

		num = 0;
		counter = 10;
  		System.out.println("num = " + num + ", counter = " + counter);
    	num = counter--;
		System.out.println("num = " + num + ", counter = " + counter);
   		num = --counter;
		System.out.println("num = " + num + ", counter = " + counter);
  }
}

