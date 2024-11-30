package objectcomposition;
public class StudentApp {
  public static void main(String[] args){	
   Course course1 = new Course(103,2004,2,80);

   Student myStudent1 = 
		new Student(11456,'M', 1.75,25,course1);
   
	Course course2 = new Course(104,2004,1,60);
   Student myStudent2 = 
 		new Student(11457,'F', 1.55,21,course2);
   Course course3 = new Course(105,2004,1,90);
   Student myStudent3 = 
		new Student(11458,'F', 1.85,28,course3);	
   myStudent1.printInfo();
   myStudent2.printInfo();
   myStudent3.printInfo();	
 }   }   
