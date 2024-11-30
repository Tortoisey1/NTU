package sc2002;

public class FiveGPhone extends MobilePhone implements IntPhone{

	private double dataRate;
	
	public FiveGPhone() {
		//super();
		super.color = "white";
		super.screenSize = 5.0;
		super.owner = "default";
		dataRate = 0.0;
	}
	
	public FiveGPhone(String color, double screenSize, String owner, double dataRate) {
		super(color, screenSize, owner);
		this.dataRate = dataRate;
	}
	
	public double getDataRate() {
		return dataRate;
	}
	
	public void setDataRate(double dataRate) {
		this.dataRate = dataRate;
	}
	
	public String sendSMS(String message) {
		
		System.out.println(message + "; This message was sent by 5G phone");
		return "sent successfully";
	}
	
	public void ring() {
		System.out.println("play music; this is a 5G phone");
	}
	
}
