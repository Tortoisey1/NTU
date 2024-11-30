public class Dice {
    private int valueOfDice;

    public Dice() {
        this.valueOfDice = 0;
    };

    public void setDiceValue() {
        this.valueOfDice = (int) (Math.random() * 6) + 1;
    }

    public int getDiceValue() {
        return this.valueOfDice;
    }

    public void printDiceValue() {
        System.out.println("Current Value is " + getDiceValue());
    }
}
