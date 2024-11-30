public class UnknownOperatorException extends Exception {
    public UnknownOperatorException() {
        super("UnknownOperatorException!");
    }

    public UnknownOperatorException(char op) {
        super("Unkown Operator: " + op);
    }

    public UnknownOperatorException(String message) {
        super(message);
    }
}
