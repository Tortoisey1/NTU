import java.util.Scanner;

public class CircleApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        menu();
        int input;
        int radius;
        Circle circle = null;
        do {
            System.out.println("Choose option (1-3) :");
            input = Integer.valueOf(scanner.nextLine());
            switch (input) {
                case 1:
                    System.out.println("Enter the radius to compute the area and circumference");
                    radius = Integer.valueOf(scanner.nextLine());
                    circle = new Circle(radius);
                    System.out.println("A new circle is created");
                    break;
                case 2:
                    if (circle != null) {
                        circle.printArea();
                    }
                    break;
                case 3:
                    if (circle != null) {
                        circle.printCircumference();
                    }
                    break;

                default:
                    System.out.println("Thank you!!");
                    break;
            }
        } while (input < 4);

    }

    public static void menu() {
        System.out.println("==== Circle Computation =====\n" + //
                "|1. Create a new circle     |\n" + //
                "|2. Print Area              |\n" + //
                "|3. Print circumference     |\r\n" + //
                "|4. Quit                    |\r\n" + //
                "=============================");
    }
}
