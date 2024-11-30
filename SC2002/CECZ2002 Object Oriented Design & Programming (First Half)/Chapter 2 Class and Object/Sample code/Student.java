package objectcomposition;

public class Student {
	
   private int    studentId;
   private char   gender;
   private double height;
   private int    age;
   private Course course;
   
   public Student(int studId, char sex, double 	  
		      studHeight, int studAge, Course courseIn)
	   {	
			studentId = studId;
			gender    = sex;
			height    = studHeight;
			age       = studAge;
			course    = courseIn;
	   }
   
   public int    getStudentId() { return studentId ; }
   public double getHeight()    { return height    ; }
   public int getAge() { return age ; }
   public void setStudentId( int studId ) {
		studentId = studId ;
   }
   public void setHeight( double studHeight ) {
		height = studHeight ;
   }
   public void setAge( int studAge ) { age = studAge ; }
   public void printInfo() {
		System.out.println( "=== Student Info ==="     );
		System.out.println( "Student ID: " + studentId );
		System.out.println( "Gender: "     + gender    );
		System.out.println( "Height: "     + height    );
		System.out.println( "Age: "        + age       );
		System.out.println( "Course: "
                          + course.getCourseId());
		System.out.println( "Year: " + course.getYear());
		System.out.println( "Semester: "
                          + course.getSemester());
		System.out.println( "Score: " + course.getScore());
   }
}
