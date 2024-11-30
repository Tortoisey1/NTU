import java.util.Scanner;
public class ComputeScore 
{
	static final double LAB_WEIGHT = 0.3; 
	static final double TEST_WEIGHT = 0.2; 
	static final double EXAM_WEIGHT = 0.5;
	public static void main(String[] args) 
	{
		String studentName;
    	double averageScore, labScore, examScore, testScore;
    	char grade = ' ';
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter student name: ");
		studentName = sc.nextLine();
		System.out.println("Enter lab assignment score: ");
    	labScore = sc.nextDouble();
    	System.out.println("Enter test score: ");
    	testScore = sc.nextDouble();
    	System.out.println("Enter examination score: ");
    	examScore = sc.nextDouble();

		averageScore = labScore * LAB_WEIGHT + examScore * EXAM_WEIGHT + testScore * TEST_WEIGHT;

    	switch ((int)averageScore/ 10) 
		{
      	case 10: case 9: case 8:
        	grade = 'A'; break;
      	case 7:
        	grade = 'B'; break;
     	case 6:
        	grade = 'C'; break;
      	case 5:
        	grade = 'D'; break;
      	case 4:
        	grade = 'E'; break;
      	default:
        	grade = 'F'; 
    	}
		System.out.println("Student name is " + studentName);
		System.out.println("The weighted average score is " + averageScore); 	
    	System.out.println("The grade is " + grade);
  }

}		

