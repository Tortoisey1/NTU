   /************************************************************
	*   Example: Delcaring vaiables with initialization         *
	*************************************************************/
   import java.util.Scanner;
    public class DeclareVarInit {	
      // constants
      static final int DEDUCTION = 2000; 
      static final double TAX_RATE = 0.2;		
       public static void main(String[] args){
       	
         // variables
         double incomeTax, taxableIncome, grossSalary;
         int numOfDependents, numOfChildren=2, numOfParents=2;
      
      	// read input     	   
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter number of children and parents : ");
         numOfChildren = sc.nextInt();
         numOfParents = sc.nextInt();			
      	     
         // assignment statements
         grossSalary = 100000;
         numOfDependents = numOfChildren + numOfParents;
         taxableIncome = 
            grossSalary - numOfDependents*DEDUCTION;
         incomeTax = taxableIncome * TAX_RATE;
         
      	// print output
         System.out.println("The income tax is " + incomeTax);
      }
   }

