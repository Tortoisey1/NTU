import java.util.Scanner;
public class ExamGrade 
{
  public static void main(String[] args) 
  {
   	int mark;
   	char grade;
	Scanner sc = new Scanner(System.in);

  	System.out.print("Give your examination mark => ");
    mark = sc.nextInt();
    if (mark <= 100 && mark >= 80) 
       	grade = 'A';
   	else if (mark < 80 && mark >= 70) 
       	grade = 'B';
    else if (mark < 70 && mark >= 60) 
       	grade = 'C';
    else 
       	grade = 'F';
    System.out.println("You scored " + grade + " in your examination.");
  }

}

