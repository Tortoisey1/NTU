public class Circle extends Point {
    private int radius;

    public Circle(int x, int y, int radius) {
        super(x, y);
        this.radius = radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }

    public int getRadius() {
        return this.radius;
    }

    public String toString() {
        return super.toString() + "Radius is: " + getRadius();
    }

    public double area() {
        return this.radius * this.radius * Math.PI;
    }

}