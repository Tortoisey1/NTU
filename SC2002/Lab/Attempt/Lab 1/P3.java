import java.util.Scanner;

public class P3 {
    public static void main(String[] args) {
        // 1 US dollar(US$) = 1.82 Singapore dollars (S$)

        Scanner scanner = new Scanner(System.in);

        System.out.println("Starting: ");
        int start = Integer.valueOf(scanner.nextLine());

        System.out.println("Ending: ");
        int end = Integer.valueOf(scanner.nextLine());

        System.out.println("Increment");
        int increment = Integer.valueOf(scanner.nextLine());

        if (start > end) {
            System.out.println("Error input!!");
        } else {
            printTable(start, end, increment);
        }

    }

    public static void printTable(int start, int end, int increment) {
        System.out.println("US$         S$\r\n" + //
                "--------------");

        for (int i = start; i <= end; i += increment) {
            System.out.printf("%-12d", i);
            System.out.println(i * 1.82);
        }
    }
}
