package sc2002;

public class MobilePhone {

	private String color;
	private double screenSize;
	private String owner; 
	
	public MobilePhone() {
		color = "white";
		screenSize = 5.0;
		owner = "John";
	}
	
	public MobilePhone(String col, double size, String ownerName) {
		color = col;
		size = screenSize;
		owner = ownerName;
	}
	
	public MobilePhone copyPhone() {
		MobilePhone phone = new MobilePhone(color, screenSize, owner);
		return phone;
		
	}
	
	public void changeName(String ownerName) {
		owner = ownerName;
	}
	
	public String sendSMS(String message) {
			System.out.println(message + " This is " + owner);
			return "sent successfully";
	}
	
	
}
