import java.util.Scanner;

public class VendingMachineApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // VendingMachine machine = new VendingMachine();
        menu();
        System.out.println("Please enter selection:");
        int selection = Integer.valueOf(scanner.nextLine());
        coinMenu();
    }

    public static void menu() {
        System.out.println("====== Vending Machine ======\r\n" + //
                "|1. Buy Beer ($3.00)         |\r\n" + //
                "|2. Buy Coke ($1.00)         |\r\n" + //
                "|3. Buy Green Tea ($5.00)    |\r\n" + //
                "|============================\r\n" + //
                "Please enter selection: ");
    }

    public static void coinMenu() {
        System.out.println("Please insert coins:\r\n" + //
                "========== Coins Input ===========\n" +
                "|Enter 'Q' for ten cents input   |\r\n" + //
                "|Enter 'T' for twenty cents input|\r\n" + //
                "|Enter 'F' for fifty cents input |\r\n" + //
                "|Enter 'N' for a dollar input    |\r\n" + //
                "==================================");
    }
}
