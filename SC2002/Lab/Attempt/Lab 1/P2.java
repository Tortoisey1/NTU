import java.util.Scanner;

public class P2 {
    public static void main(String[] args) {
        // assume standard inputs

        Scanner scanner = new Scanner(System.in);

        System.out.println("What's your salary");
        int salary = Integer.valueOf(scanner.nextLine());


        System.out.println("What's your merit");
        int merit = Integer.valueOf(scanner.nextLine());

        System.out.println("Grade " + grade(salary, merit));
    }

    public static char grade(int salary, int merit) {

        if (salary < 649) { // grade C
            if (salary > 600 && merit >= 10) {
                return 'B';
            }
            return 'C';
        } else if (salary < 799) {
            if (salary > 700 && merit >= 20) {
                return 'A';
            }
            return 'B';
        }

        return 'A';

    }
}
