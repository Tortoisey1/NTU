import java.util.Scanner;

public class P1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("What type of movie fan are you:");
        String reply = scanner.nextLine();

        char movie = reply.charAt(0);

        switch (movie) {
            case 'A':
            case 'a':
                System.out.println("Action movie fan");
                break;
            case 'C':
            case 'c':
                System.out.println("Comedy movie fan");
                break;
            case 'D':
            case 'd':
                System.out.println("Drama movie fan");
                break;
            default:
                System.out.println("Invalid choice");
                break;
        }
    }
}
