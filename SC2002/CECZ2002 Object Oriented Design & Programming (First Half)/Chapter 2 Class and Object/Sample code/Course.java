package objectcomposition;

public class Course {
	
   private int courseId;
   private int year;
   private int semester;
   private int score;
   
   public Course( int courseId , int year  ,
                  int semester , int score ) {
		this.courseId = courseId ;
		this.year     = year     ;
		this.semester = semester ;
		this.score    = score    ;
   }
   
   public void setCourseId(int courseId) {
		this.courseId = courseId; }
   public void setYear(int year) {
		this.year     = year;     }
   public void setSemester(int semester) {
		this.semester = semester; }
   public void setScore(int score) {
		this.score    = score;    }
   public int getCourseId(){
		return courseId;
  }
  public int getYear(){
		return year;
  }
  public int getSemester(){
		return semester;
  }
  public int getScore(){
		return score;
  }
}

