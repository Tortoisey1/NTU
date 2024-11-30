package chapter5.poly.abstractAnimal;

public class AbstractAnimalDemo {
	public static void main(String[] args) {
        Animal a1 = new Cat();
        a1.makeNoise(); 
        
      /*a1.testStr error:
        after upcasting, 
        superclass reference cannot access actual/subclass type's attribute and method
      */
      //System.out.println("declare Animal & actual Cat " + a1.testStr);
        
        Cat c2 = new Cat();
        System.out.println("declare & actual Cat " + c2.testStr);
        
        if (a1 instanceof Cat) {
        	Cat ac = (Cat)a1;
        	System.out.println("declare Animal & actual Cat after downcasting " + ac.testStr);
        }    
    }
}

abstract class Animal{
	abstract void makeNoise();
}


class Cat extends Animal{
	public String testStr="I am a true cat"; //sub class's attribute
	void makeNoise(){System.out.println("Meawoo");}
}

