import java.util.Scanner;

public class P4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the height of the pyramid");
        int height = Integer.valueOf(scanner.nextLine());

        if (height <= 0) {
            System.out.println("Error input!!");
        } else {
            printPyramid(height);
        }

    }

    public static void printPyramid(int height) {

        for (int i = 1; i <= height; i++) {
            if (i % 2 == 1) {// odd stack
                for (int j = 0; j < i; j++) {
                    if (j % 2 == 0) {// even
                        System.out.print("AA");
                    } else {
                        System.out.print("BB");
                    }
                }
                System.out.println("");
            } else {
                for (int j = 0; j < i; j++) {
                    if (j % 2 == 0) {// even
                        System.out.print("BB");
                    } else {
                        System.out.print("AA");
                    }
                }
                System.out.println("");
            }
        }
    }

}
