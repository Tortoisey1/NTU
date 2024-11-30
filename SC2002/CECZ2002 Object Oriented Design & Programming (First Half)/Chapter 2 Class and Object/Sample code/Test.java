package objectcomposition.job;

public class Test {
	public static void main(String[] args) {
        Person person = new Person();
        long salary = person.getSalary();
        System.out.println("salary is " + salary);
    }
}
