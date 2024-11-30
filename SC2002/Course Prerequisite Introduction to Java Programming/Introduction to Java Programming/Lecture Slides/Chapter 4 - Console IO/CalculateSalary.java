   import java.util.Scanner;
    public class CalculateSalary 
   { 
       public static void main(String[] args)	
      {	
         int empNo;
         double hourlyRate, hoursOfWork, daysOfWork;
         double salaryPerDay, totalSalary;
         Scanner sc = new Scanner(System.in);
         boolean test=false;
         if (test==true)
         { System.out.print("Enter employee number: ");
            empNo = sc.nextInt();
         }    System.out.print("Enter number of hours of work: ");
         hoursOfWork = sc.nextDouble();
         System.out.print("Enter hourly rate: ");
         hourlyRate = sc.nextDouble();
         System.out.print("Enter number of days of work: ");
         daysOfWork = sc.nextDouble();
      
         salaryPerDay = hoursOfWork * hourlyRate;
         totalSalary = salaryPerDay * daysOfWork;
      
         System.out.println("The salary is: ");
         System.out.println("Employee no: " + empNo);
         System.out.println("Hours of work: " + hoursOfWork);
         System.out.println("Hourly rate: $" + hourlyRate);
         System.out.println("Days of work: " + daysOfWork); 
         System.out.println("Salary per day: $" + salaryPerDay);
         System.out.println("Total salary: $" + totalSalary);
      }
   }

