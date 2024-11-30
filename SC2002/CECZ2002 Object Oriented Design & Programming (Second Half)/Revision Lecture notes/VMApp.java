import java.util.ArrayList;

class Vendingmachine {
	private ArrayList<Drink> drinks;
	
	public Vendingmachine(ArrayList<Drink> drinks) {
		this.drinks=drinks;
	}
	
	public void DisplayDrink(){
		// Printing elements one by one
        for (int i = 0; i < drinks.size(); i++)
            System.out.println(drinks.get(i).getName());	
	}
}

class Drink {
	private String name;
	private double cost;

	public Drink(String n, double c) {
		name = n ;
		cost = c;
	}
	public String getName() { return name;}
	public double getCost() { return cost;}
}



public class VMApp {
	public static void main(String[] args) {
		ArrayList<Drink> drinks = new ArrayList<Drink>();
		drinks.add(new Drink("Beer" ,3.00));   
		drinks.add(new Drink("Coke" ,1.00));
		Vendingmachine vm = new Vendingmachine(drinks) ;   
		vm.DisplayDrink();
}}
