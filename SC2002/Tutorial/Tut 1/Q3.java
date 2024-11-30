import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] a = new int[100];
        int n, i;
        System.out.println("\n\n Enter number of Integer elements to be sorted: ");
        n = Integer.valueOf(scanner.nextLine());

        for (i = 0; i <= n - 1; i++) {
            System.out.println("\n\n Enter integer value for element no." + (i + 1) + " : ");
            a[i] = Integer.valueOf(scanner.nextLine());
        }

        bubble(a, n);

        System.out.println("\n\n Finally sorted array is: ");
        for (i = 0; i <= n - 1; i++) {
            System.out.println(a[i]);
        }
    } // end program.

    public static void bubble(int[] a, int n) {

        int i, j, t;
        for (i = n - 2; i >= 0; i--) {
            for (j = 0; j <= i; j++) {
                if (a[j] > a[j + 1]) {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
    }// end function.
}