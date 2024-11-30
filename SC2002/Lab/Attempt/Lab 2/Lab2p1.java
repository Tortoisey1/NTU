import java.util.Scanner;

public class Lab2p1 {
    public static void main(String[] args) {
        int choice;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("Perform the following methods:");
            System.out.println("1: miltiplication test");
            System.out.println("2: quotient using division by subtraction");
            System.out.println("3: remainder using division by subtraction");
            System.out.println("4: count the number of digits");
            System.out.println("5: position of a digit");
            System.out.println("6: extract all odd digits");
            System.out.println("7: quit");
            choice = sc.nextInt();
            sc.nextLine(); // input buffer

            switch (choice) {
                case 1: /* add mulTest() call */
                    mulTest();
                    break;
                case 2: /* add divide() call */

                    System.out.println("Enter first number m: ");
                    int m = Integer.valueOf(sc.nextLine());

                    System.out.println("Enter second number n: ");
                    int n = Integer.valueOf(sc.nextLine());

                    System.out.println(m + "/" + n + " = " + divide(m, n));
                    break;
                case 3: /* add modulus() call */
                    System.out.println("Enter first number m: ");
                    int temp = Integer.valueOf(sc.nextLine());

                    System.out.println("Enter second number n: ");
                    int temp2 = Integer.valueOf(sc.nextLine());
                    System.out.println(temp + " % " + temp2 + " = " +
                            modulus(temp, temp2));
                    break;
                case 4: /* add countDigits() call */
                    System.out.println("Enter number n: ");
                    int temp3 = Integer.valueOf(sc.nextLine());

                    if (temp3 < 0) {
                        System.out.println("n: " + temp3 + " - Error input!!");
                    } else {

                        System.out.println("n: " + temp3 + " - count = " +
                                countDigits(temp3));
                    }
                    break;
                case 5: /* add position() call */

                    System.out.println("Enter number n: ");
                    int temp4 = Integer.valueOf(sc.nextLine());

                    System.out.println("Enter digit: ");
                    int temp5 = Integer.valueOf(sc.nextLine());

                    System.out.println("position = " + position(temp4, temp5));
                    break;
                case 6: /* add extractOddDigits() call */
                    System.out.println("Enter number n: ");
                    int temp6 = Integer.valueOf(sc.nextLine());

                    if (temp6 < 0) {
                        System.out.println("oddDigits = Error input!!");
                    } else {
                        System.out.println("oddDigits = " +
                                extractOddDigits(temp6));
                    }
                    break;
                case 7:
                    System.out.println("Program terminating ….");
            }
        } while (choice < 7);
    }

    /* add method code here */
    public static void mulTest() {
        int count = 0, num1, num2, answer;
        Scanner scanner = new Scanner(System.in);
        int reply;
        for (int i = 0; i < 5; i++) {
            num1 = (int) (Math.random() * 9) + 1;
            num2 = (int) (Math.random() * 9) + 1;
            answer = num1 * num2;
            System.out.println("How much is " + num1 + " times " + num2 + "? ");
            reply = Integer.valueOf(scanner.nextLine());
            if (reply == answer) {
                count++;
            }

        }

        System.out.println(count + " answers out of 5 are correct");

    }

    public static int divide(int m, int n) {
        int count = 0;

        while (m > 0) {
            m -= n;
            if (m >= 0) {
                count++;
            }
        }

        return count;
    }

    public static int modulus(int m, int n) {
        while (m > 0) {
            m -= n;
        }

        m = (m == 0) ? 0 : n + m;
        return m;
    }

    public static int countDigits(int n) {

        int count = 0;
        while (n > 0) {
            count++;
            n /= 10;
        }

        return count;

    }

    public static int position(int n, int digit) {
        int count = 1;
        while (n > 0) {
            if ((n % 10) == digit) {
                return count;
            }
            n /= 10;
            count++;
        }

        return -1;

    }

    public static long extractOddDigits(long n) {
        long answer = -1;

        int leastSig;
        int digits;
        while (n > 0) {
            leastSig = (int) (n % 10);
            if (leastSig % 2 == 1) {
                if (answer == -1) {
                    answer = leastSig;
                } else {
                    digits = countDigits((int) answer);
                    answer += Math.pow(10, digits) * leastSig;
                }
            }
            n /= 10;
        }

        return answer;
    }
}