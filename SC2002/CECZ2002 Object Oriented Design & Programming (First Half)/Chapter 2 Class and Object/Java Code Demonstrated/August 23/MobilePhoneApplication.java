package sc2002;

public class MobilePhoneApplication {

	public static void main(String[] args) {
		
		MobilePhone johnPhone;
		johnPhone = new MobilePhone();
		
		MobilePhone tomPhone = new MobilePhone("blue", 7.0, "Tom");
		
		johnPhone.sendSMS("Hi Tom.");
		
		//MobilePhone janePhone;
		//janePhone.sendSMS("hello world!");
		
		//MobilePhone copiedPhone = tomPhone.copyPhone();
		
		MobilePhone copiedPhone = tomPhone;
		
		tomPhone.changeName("Jane");
		
		copiedPhone.sendSMS("Hi John.");
		
		tomPhone.sendSMS("Hi John.");
		
	}
	
	
}
