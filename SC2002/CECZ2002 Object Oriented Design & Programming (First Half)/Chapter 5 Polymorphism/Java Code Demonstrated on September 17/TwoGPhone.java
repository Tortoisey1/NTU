package sc2002;

public class TwoGPhone extends MobilePhone implements IntPhone{
	
	public TwoGPhone() {
		super();
	}
	
	public String sendSMS(String message) {
		System.out.println(message + "; This message was sent by 2G phone");
		return "sent successfully";
	}

	public void ring() {
		System.out.println("ring ring ring, this is 2G phone");
	}
	
}
