package sc2002;

public class MobilePhone {

	private String color;
	private double screenSize;
	private String owner; 
	
	private int numOfSMS;
	
	private static int totalNumOfSMS;
	
	
	public MobilePhone() {
		//color = "white";
		//screenSize = 5.0;
		//owner = "Default";
		this("white", 5.0, "Default");
	}
	
	public MobilePhone(String color, double screenSize, String owner) {
		this.color = color;
		this.screenSize = screenSize;
		this.owner = owner;
	}
	
	public String getColor() {
		return color;
	}
	
	public double getSize() {
		return screenSize;
	}
	
	public String getName() {
		return owner;
	}
	
	public int getNumOfSMS() {
		return numOfSMS;
	}
	
	public static int getTotalNumOfSMS() {
		return totalNumOfSMS;
	}
	
	public void setName(String ownerName) {
		owner = ownerName;
	}
	
	public void setColr(String color) {
		this.color = color;
	}
	
	public void setSize(double screenSize) {
		this.screenSize = screenSize;
	}
	
	public MobilePhone copyPhone() {
		MobilePhone phone = new MobilePhone(color, screenSize, owner);
		return phone;
		
	}
	

	
	public String sendSMS(String message) {
			numOfSMS++;
			totalNumOfSMS++;
			this.setName("unknown");
			System.out.println(message + " This is " + owner);
			return "sent successfully";
	}
	
	
}
