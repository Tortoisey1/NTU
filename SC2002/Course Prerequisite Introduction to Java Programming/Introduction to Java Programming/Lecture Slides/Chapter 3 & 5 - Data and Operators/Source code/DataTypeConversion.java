    public class DataTypeConversion 
   {
       public static void main(String[] args) 
      {
         int num;
         double num1, num2;
      
      // Explicit conversion 
         num = (int) 2.5 + (int) 3.7; 
      // convert 2.5 to 2 and 3.7 to 3, then perform addition
         System.out.println("num = " + num);
      
      // Assignment conversion 
         num1 = 2 + 3; 
      // add 2 and 3 to get 5, then convert it to 5.0 
         System.out.println("num1 = " + num1);
      
      // Arithmetic conversion 
         num2 = 2 + 3.7; 
      // convert 2 to 2.0, then perform addition 
         System.out.println("num2 = " + num2);
      	
         int test;
         double test2 = 2.2, test3=1.1;
         test = test2 + test3;
         System.out.println("test = " + test);
      }
   }

