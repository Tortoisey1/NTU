public class Triangle extends Polygon {
    public Triangle(String theName, float theWidth, float theHeight) {
        super(theName, theWidth, theHeight);
        setPolytype(Polygon.KindofPolygon.POLY_TRIANG);
    }

    public void printArea() {
        System.out.println("In Triangle");
    }
}
