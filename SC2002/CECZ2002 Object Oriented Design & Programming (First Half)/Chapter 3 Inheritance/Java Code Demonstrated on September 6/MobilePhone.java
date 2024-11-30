package sc2002;

import java.util.*;

public class MobilePhone {

	public static final double MAX_SCREEN_SIZE = 7.0;
	
	private String color;
	private double screenSize;
	private String owner; 	
	
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
	
	public void setName(String ownerName) {
		owner = ownerName;
	}
	
	public void setColr(String color) {
		this.color = color;
	}
	
	public void setSize(double screenSize) {
		if(screenSize >= MAX_SCREEN_SIZE) {
			this.screenSize = MAX_SCREEN_SIZE;
		}else {
			this.screenSize = screenSize;
		}
	}
	
	public String sendSMS(String message) {
			System.out.println(message + " This is " + owner);
			return "sent successfully";
	}
	
	public String sendSMS(String message, String sender) {
		System.out.println(message + " This is " + sender);
		return "sent successfully";
	}
	
}
