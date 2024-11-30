public class TestPolygon {
    public static void main(String[] args) {
        Polygon rectangleStatic = new Rectangle("Rectangle Static", 12, 12);
        Polygon triangleStatic = new Triangle("Triangle Static", 12, 12);
        TestPolygon holder = new TestPolygon();
        // static binding
        System.out.println("Static binding:");
        holder.printArea(rectangleStatic);
        holder.printArea(triangleStatic);
        System.out.println("");

        // dynamic binding
        Polygon rectangleDynamic = new Rectangle("Rectangle Dynamic", 12, 12);
        Polygon triangleDynamic = new Triangle("Triangle Dynamic", 12, 12);

        System.out.println("Dynamic binding:");
        rectangleDynamic.printArea();
        triangleDynamic.printArea();
    }

    public void printArea(Polygon polygon) { // for
        System.out.println("In Static Polygon: " + polygon.getPolytype());

    }
}
