package noAbstract.Figure;

public class Circle extends Figure{
	private double radius;	
	  public Circle() { super()  ; this.radius = 0   ; }
	  public Circle( String c , double rad )
	                  { super(c) ; this.radius = rad ; }

	  public double getRadius() { return radius; }

	  // own methods
	  public double findArea()
	    { return Math.PI * radius * radius ; }
	  public double findPerimeter()
	    { return 2 * Math.PI * radius ; }
	  public void print() {
	    System.out.println( "Circle print() method: "        );
	    System.out.println( "Radius = "    + radius          );
	    System.out.println( "Perimeter = " + findPerimeter() );
	    System.out.println( "Area = "      + findArea()      );
	  }
}
