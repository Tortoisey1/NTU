package sc2002;

import java.util.*;

public class MobilePhoneApplication {

	public static void main(String[] args) {
		
		//MobilePhone johnPhone;
		//johnPhone = new MobilePhone();
		//johnPhone.owner = "John";
		//johnPhone.screenSize = 10.0;
		//johnPhone.setName("John");
		//johnPhone.setSize(10);
		//System.out.println("the screen size of john's phone is: " + johnPhone.getSize());
		//System.out.println("the color of john's phone is: " + johnPhone.getColor());
		//johnPhone.sendSMS("Would you go to lunch with me?");
		//johnPhone.sendSMS("Would yo go to lunch with me?", "unknown sender");
		
		
		//FiveGPhone fiveGPhone = new FiveGPhone("green", 7.0, "Tom", 2.0);
		
		//System.out.println("the color is: " + fiveGPhone.getColor());
		//fiveGPhone.sendSMS("Would you go to dinner with me?");
		//fiveGPhone.sendSMS("Would you go to dinner with me?", "unknown sender");
		//fiveGPhone.ring();
	
		MobilePhone phone = new TwoGPhone();
		phone.sendSMS("hello John");
		
		phone = new FiveGPhone("green", 7.0, "Tom", 2.0);
		phone.sendSMS("hello John");
	
		
		IntPhone iPhone = new TwoGPhone();
		iPhone.ring();
		
		iPhone = new FiveGPhone("white", 5.0, "Jane", 3.0);
		iPhone.ring();
		
	
	}
	
	
}
