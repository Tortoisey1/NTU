package sc2002;

public class SixGPhone extends MobilePhone{
	
	public SixGPhone (String color, double screenSize, String owner) {
			super(color, screenSize, owner);
	}

	public String sendSMS(String message) {
		System.out.println(message + "; This message was sent by 6G phone");
		return "sent successfully";
	}
}
