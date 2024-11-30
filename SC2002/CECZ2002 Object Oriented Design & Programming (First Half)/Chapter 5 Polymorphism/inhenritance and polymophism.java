package chapter5.xyz.doabc.improve;


public class ClassXYZimprove {

	public static void main(String[] args) {
		
		ClassX  aa  = new ClassY( );
		//ClassZ  bb  = (ClassZ) aa;//no compilation error, but have runtime error
		ClassY bb = (ClassY)aa;
		
		ClassZ  cc = new ClassZ(); 
		
		//error: cannot create object of abstract class
		//ClassX ss = new ClassX();
		
		bb.doA();//ClassY object invoke method of ClassX: inherit from ClassX
		aa.doC();//ClassX reference ClassY object invokes subclass's method, abstract method defined in ClassX
		cc.doF();//ClassZ object call its own method

	}
}

abstract class ClassX {
	 void doA(){System.out.println("ClassX: doA");}
	 void doB(){}
	 abstract void doC(); //an abstract method opens the door to access subclass's method
	 //void doC(){System.out.println("ClassX: doC");}
	}

class ClassY extends ClassX{
		void doC(){System.out.println("ClassY: doC");}
		void doD(){}
		void doE(){}
	}

class ClassZ extends ClassY{
		void doF(){System.out.println("ClassY: doF");}
	}
