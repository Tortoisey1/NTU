package noAbstract.Figure;


public class FigureNoAbstract {
	public static void main( String[] args )
	 {
	  Rectangle f1 = new Rectangle( "Red" , 10 , 10 );
	  Rectangle f2 = new Rectangle( "YELLOW" , 8 , 7 );
	  Circle f3 = new Circle( "Orange" , 7.8 );
	  Circle f4 = new Circle( "BLUE" , 6.2);
	  
	  System.out.println("The two Figures f1 and f2 have the same area? " + equalArea(f1,f2));
	  System.out.println("The two Figures f1 and f3 have the same area? " + equalArea(f1,f3));
	  System.out.println("The two Figures f4 and f1 have the same area? " + equalArea(f4,f1));
	  System.out.println("The two Figures f2 and f3 have the same area? " + equalArea(f2,f3));
	  System.out.println("The two Figures f2 and f4 have the same area? " + equalArea(f2,f4));
	  System.out.println("The two Figures f3 and f4 have the same area? " + equalArea(f3,f4));
	  
	 }
	
	//the method for comparing the areas of two Rectangles
	public static boolean equalArea(Rectangle fig1, Rectangle fig2){
		return fig1.findArea() == fig2.findArea();
	}
	
	//the method for comparing the areas of a Rectangle and a Circle
	public static boolean equalArea(Rectangle fig1, Circle fig2){
		return fig1.findArea() == fig2.findArea();
	}
	
	//the method for comparing the areas of a Circle and a Rectangle
	public static boolean equalArea(Circle fig1, Rectangle fig2){
		return fig1.findArea() == fig2.findArea();
	}
	
	//the method for comparing the areas of two Circles 
	public static boolean equalArea(Circle fig1, Circle fig2){
		return fig1.findArea() == fig2.findArea();
	}
}

