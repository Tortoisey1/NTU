package noAbstract.Figure;

import absclass.method.Figure;

public class Rectangle extends Figure { 
	   private double width  ;	
	   private double height ;

	   public Rectangle()
	      { super()    ; this.width = 0 ; this.height = 0 ; }
	   public Rectangle( String c , double w , double h )
		 { super( c ) ; this.width = w ; this.height = h ; }
	   public double getWidth()  { return width  ; }
	   public double getHeight() { return height ; }

	   // own methods
	   public double findArea()      { return width * height   ; }
	   public double findPerimeter() { return 2*(width+height) ; }
	   public void   print() {
		System.out.println( "Rectangle print() method: " );
		System.out.println( "Width = "    + width
	                       + "; Height = " + height           );
		System.out.println( "Perimeter = " + findPerimeter() );
		System.out.println( "Area = "      + findArea()      );
	   }
	}
