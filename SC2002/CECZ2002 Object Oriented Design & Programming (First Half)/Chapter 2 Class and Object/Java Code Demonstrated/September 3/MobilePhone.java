package sc2002;

import java.util.*;

public class MobilePhone {

	public static final double MAX_SCREEN_SIZE = 8;
	
	private String color;
	private double screenSize;
	private String owner; 
	private int numOfSMS;
	private App app; 
	private ArrayList<App> appStore; 
	
	private static int totalNumOfSMS;
	
	
	public MobilePhone() {
		color = "white";
		screenSize = 5.0;
		owner = "Default";
		//this("white", 5.0, "Default");
	}
	
	public MobilePhone(String color, double screenSize, String owner, App app, ArrayList<App> appStore) {
		this.color = color;
		this.screenSize = screenSize;
		this.owner = owner;
		this.app = app;
		this.appStore = appStore;
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
	
	public App getApp() {
		return app;
	}
	
	public ArrayList<App> getAppStore(){
		return appStore;
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
	
	public void setApp(App app) {
		this.app = app;
	}
	
	public void setAppStore(ArrayList<App> appStore) {
		this.appStore = appStore;
	}
	
	public void setSize(double screenSize) {
		if(screenSize >= MAX_SCREEN_SIZE) {
			this.screenSize = MAX_SCREEN_SIZE;
		}else {
			this.screenSize = screenSize;
		}
	}
	
	public MobilePhone copyPhone() {
		MobilePhone phone = new MobilePhone(color, screenSize, owner, app, appStore);
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
