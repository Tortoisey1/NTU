import java.util.Scanner;

public class PlaneApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int choice, seatId, customerId;
        Plane plane = new Plane();
        printMenu();
        do {
            System.out.println("Enter the number of your choice: ");
            choice = Integer.valueOf(scanner.nextLine());

            switch (choice) {
                case 1:
                    plane.showNumEmptySeats();
                    break;
                case 2:
                    plane.showEmptySeats();
                    break;
                case 3:
                    plane.showAssignedSeats(true);
                    break;
                case 4:
                    plane.showAssignedSeats(false);
                    break;
                case 5:
                    System.out.println("Assigning Seat ..");

                    System.out.println("Please enter SeatID: ");
                    seatId = Integer.valueOf(scanner.nextLine());

                    System.out.println("Please enter Customer ID: ");
                    customerId = Integer.valueOf(scanner.nextLine());

                    plane.assignSeat(seatId, customerId);

                    break;
                case 6:
                    System.out.println("Enter SeatID to unassign customer from: ");
                    seatId = Integer.valueOf(scanner.nextLine());
                    plane.unAssignSeat(seatId);
                    break;

                default:
                    break;
            }

            System.out.println("");
        } while (choice < 7);
    }

    public static void printMenu() {
        System.out.println("(1) Show number of empty seats\r\n" + //
                "(2) Show the list of empty seats\r\n" + //
                "(3) Show the list of seat assignments by seat ID\r\n" + //
                "(4) Show the list of seat assignments by customer ID\r\n" + //
                "(5) Assign a customer to a seat\r\n" + //
                "(6) Remove a seat assignment\r\n" + //
                "(7) Exit");
    }
}
