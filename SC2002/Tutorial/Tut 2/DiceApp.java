import java.util.Scanner;

public class DiceApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String holder;

        Dice first = new Dice();
        Dice second = new Dice();

        first.setDiceValue();
        second.setDiceValue();

        System.out.println("Press <key> to roll the first dice");
        holder = scanner.nextLine();
        first.printDiceValue();

        System.out.println("Press <key> to roll second dice");
        holder = scanner.nextLine();
        second.printDiceValue();

        System.out.println("Your total number is: " + (first.getDiceValue() + second.getDiceValue()));
    }
}
