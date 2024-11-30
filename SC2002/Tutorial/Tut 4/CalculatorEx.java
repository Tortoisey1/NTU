import java.util.Scanner;

public class CalculatorEx {
    public static void main(String[] args) {

        CalculatorEx calculator = new CalculatorEx();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Calculator is on");
        System.out.println("result = " + calculator.resultValue());
        while (true) {
            calculator.doCalculation();
        }
    }

    private double result;

    public CalculatorEx() {
        this.result = 0;
    }

    public double resultValue() {
        return this.result;
    }

    public void doCalculation() {
        Scanner scanner = new Scanner(System.in);

        char op = '\0';
        double temp = 0;
        while (true) {
            try {
                op = scanner.nextLine().charAt(0);

                if (op == 'q' || op == 'Q') {
                    System.out.println("Final result = " + resultValue());
                    System.out.println("End of Program");
                    System.exit(0);
                }

                temp = Double.valueOf(scanner.nextLine());

                if (op == '+' || op == '-' || op == '*' || op == '/') {
                    result = evaluate(op, resultValue(), temp);
                    System.out.println("result " + op + " " + temp + " = " + resultValue());
                    System.out.println("updated result = " + resultValue());
                } else {
                    System.out.println(op + " is an unknown operator");
                    throw new UnknownOperatorException();
                }

            } catch (Exception UnknownOperatorException) {
                result = handleUnknownOpException();
            }

        }

    }

    public double evaluate(char op, double n1, double n2) {
        double answer = 0;
        switch (op) {
            case '+':
                answer = n1 + n2;
                break;
            case '-':
                answer = n1 - n2;
                break;
            case '/':
                answer = n1 / n2;
                break;
            case '*':
                answer = n1 * n2;
                break;
            default:
                break;
        }
        return answer;
    }

    public double handleUnknownOpException() {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Please reenter:");
        System.out.println("updated result = " + resultValue());

        double answer = 0;

        try {
            char op = scanner.nextLine().charAt(0);

            if (op == 'q' || op == 'Q') {
                System.out.println("Final result = " + resultValue());
                System.out.println("End of Program");
                System.exit(0);
            }

            double temp = Double.valueOf(scanner.nextLine());

            if (op == '+' || op == '-' || op == '*' || op == '/') {
                answer = evaluate(op, resultValue(), temp);
                System.out.println("result " + op + " " + temp + " = " + resultValue());
                System.out.println("updated result = " + resultValue());
            } else {
                System.out.println(op + " is an unknown operator");
                throw new UnknownOperatorException();
            }

        } catch (Exception UnknownOperatorException) {
            // TODO: handle exception
            answer = handleUnknownOpException();

        }

        return answer;
    }
}
