public class Rectangle extends Polygon {
    public Rectangle(String theName, float theWidth, float theHeight) {
        super(theName, theWidth, theHeight);
        setPolytype(Polygon.KindofPolygon.POLY_RECT);
    }

    public void printArea() {
        System.out.println("In Rectangle");
    }
}
