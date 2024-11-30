package inheritance;

class Animal{
	public Animal(){
		System.out.print("Base Constructor");
	}
}
class Cat extends Animal{
	public Cat(){	
		System.out.print("Derived Constructor");		
	}
}
public class Program {
	public static void main(String[] args) {
		Cat c = new Cat();
}
}
