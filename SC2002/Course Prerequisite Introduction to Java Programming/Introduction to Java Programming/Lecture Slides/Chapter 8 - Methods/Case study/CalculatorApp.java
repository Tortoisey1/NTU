import java.util.Scanner;
public class CalculatorApp 
{
	public static void main(String[] args) 
	{
		int option = 1;
		char operator = ' ';
    	double operand1 = 0, operand2 = 0, result;
		Scanner sc = new Scanner(System.in);

   	    displayMainMenu();
  		do {
			System.out.println("Enter operation: ");
		   	operator = getOperator();
 	     	System.out.println("Enter number 1: ");
     	 	operand1 = sc.nextDouble();

    	  	// Check whether second number is needed 
     	 	if (operator == '+' || operator == '*' ||
     	     	operator == '-' || operator == '/'
    	      	|| operator == '^') 
			{
       		 	System.out.println("Enter number 2: ");
       		 	operand2 = sc.nextDouble();
     	 	}
 	     	result = calculation(operator, operand1, operand2);
  	    	printResults(result,operator,operand1,operand2);
			System.out.println("Enter 1 - repeat or 2 - quit");
   		   	option = sc.nextInt();
  	 	} while (option == 1);
		System.out.println("Thank You!!");
  	}

  	// Display menu 
  	public static void displayMainMenu() 
	{
		System.out.println("=====Simple Calculator=====");
		System.out.println("Enter operation: ");
		System.out.println("+ :addition (i.e. num1 + num2");
		System.out.println("- :subtraction (i.e. num1 - num2");
		System.out.println("* :multiplication (i.e.num1*num2");
		System.out.println("/ :division (i.e. num1/num2");
		System.out.println("^ :power (i.e. pow(num1, num2)");
		System.out.println("L :logarithm (i.e. log(num1))");
		System.out.println("S :sine (i.e. sin(num1))");
		System.out.println("C :cosine (i.e. cos(num1))");
		System.out.println("T :tangent (i.e. tan(num1))");
		System.out.println("===========================");
  	}

  	// Get the operator 
  	public static char getOperator() 
	{
		Scanner sc = new Scanner(System.in);
    	String op = sc.next();
		return (op.charAt(0));
  	}

  	// Print the result 
	public static void printResults(double num, char operator, double operand1, double operand2) 
	{
    	if (operator=='+' || operator=='*' ||
    		   operator=='-' || operator=='/' || operator=='^')
			System.out.println(operand1 + " " + operator + " " + operand2 + " = " + num);
    	else
    		System.out.println("Result : " + num);
  	}

  	// Perform operations 
	public static double calculation(char operator, double operand1, double operand2) 
	{
    	double result = 0.0;
    	switch (operator) 
		{
      	case '+': result = operand1 + operand2; break;
      	case '-': result = operand1 - operand2; break;
      	case '*': result = operand1 * operand2; break;
      	case '/': result = operand1 / operand2; break;
      	case '^': result = Math.pow(operand1, operand2); 
						   break;
      	case 'l': result = Math.log(operand1); break;
      	case 'S': result = Math.sin(operand1); break;
      	case 'C': result = Math.cos(operand1); break;
      	case 'T': result = Math.tan(operand1); break;
      	default : System.out.println("Invalid Operator!");
    	}
    	return result;
  	}


}				


