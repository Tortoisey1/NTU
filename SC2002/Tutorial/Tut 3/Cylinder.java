public class Cylinder extends Circle {
    int height;

    public Cylinder(int x, int y, int radius, int height) {
        super(x, y, radius);
        this.height = height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getHeight() {
        return this.height;
    }

    public String toString() {
        return super.toString() + "Height is:" + getHeight();
    }

    public double area() {
        return super.area() * 2 + 2 * Math.PI * getRadius() * getHeight();
    }

    public double volume() {
        return super.area() * getHeight();
    }
}
