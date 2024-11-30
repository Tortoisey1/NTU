package sc2002;

public class MobilePhoneApplication {

	public static void main(String[] args) {
		
		MobilePhone johnPhone;
		johnPhone = new MobilePhone();
		johnPhone.setName("John");
		
		System.out.println("the color of john's phone is: " + johnPhone.getColor());
		
		MobilePhone tomPhone = new MobilePhone("blue", 7.0, "Tom");
		
		johnPhone.sendSMS("Hi Tom.");
		
		tomPhone.sendSMS("Hello, John.");
		
		System.out.println("number of SMS sent by John is: " + johnPhone.getNumOfSMS());
		
		
		System.out.println("number of SMS sent by Tom is: " + tomPhone.getNumOfSMS());
		
		
		System.out.println("total number of SMS sent by all phones is: " + MobilePhone.getTotalNumOfSMS());
		
		//MobilePhone janePhone;
		//janePhone.sendSMS("hello world!");
		
		//MobilePhone copiedPhone = tomPhone.copyPhone();
		
		//MobilePhone copiedPhone = tomPhone;
		
		//tomPhone.changeName("Jane");
		
		//copiedPhone.sendSMS("Hi John.");
		
		//tomPhone.sendSMS("Hi John.");
		
		
		
	}
	
	
}
