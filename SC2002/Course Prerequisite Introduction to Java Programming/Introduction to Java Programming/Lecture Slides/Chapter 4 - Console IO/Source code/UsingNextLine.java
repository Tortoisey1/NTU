   import java.util.Scanner;
    public class UsingNextLine 
   {			
       public static void main(String args[])
      {	
         Scanner sc = new Scanner(System.in);
      
         System.out.print("Enter your name: "); 
         String name = sc.nextLine();
         System.out.print("Enter your age: "); 
         int age = sc.nextInt();
      	
        //sc.nextLine();
         System.out.print("Enter your gender: ");
         String gender = sc.nextLine();
         System.out.print("Enter your height: "); 
         double height = sc.nextDouble();
      
         System.out.println("Hello! ");
         System.out.println("Your name is " + name);
         System.out.println("Your age is " + age);
         System.out.println("Your gender is " + gender);
         System.out.println("Your height is " + height);
      }								
   }

