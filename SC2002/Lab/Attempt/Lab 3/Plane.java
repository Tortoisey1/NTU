public class Plane {
    private PlaneSeat[] seat;
    private int numEmptySeat;

    public Plane() {
        this.seat = new PlaneSeat[12];
        for (int i = 0; i < this.seat.length; i++) {
            this.seat[i] = new PlaneSeat(i + 1);
        }
        this.numEmptySeat = this.seat.length;
    }

    private PlaneSeat[] sortSeats() {
        PlaneSeat[] temp = this.seat.clone();
        // bubble sort
        PlaneSeat holder;
        for (int i = 0; i < temp.length - 1; i++) {
            for (int j = i; j < temp.length - 1; j++) {
                if (temp[j].getCustomerID() > temp[j + 1].getCustomerID()) {
                    holder = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = holder;
                }
            }
        }
        return temp;

    }

    public void showNumEmptySeats() {
        System.out.println("There are " + this.numEmptySeat + " empty seats");
    }

    public void showEmptySeats() {
        System.out.println("The following seats are empty:");
        for (PlaneSeat planeSeat : seat) {
            if (!planeSeat.isOccupied()) {
                System.out.println("SeatID " + planeSeat.getSeatID());
            }
        }
    }

    public void showAssignedSeats(boolean bySeatId) {
        System.out.println("The seat assignments are as follow:");
        if (bySeatId) {
            // sort by seatId show the usual index
            for (PlaneSeat planeSeat : this.seat) {
                if (planeSeat.isOccupied()) {
                    System.out.println("SeatID " + planeSeat.getSeatID() + " assigned to CustomerID "
                            + planeSeat.getCustomerID() + ".");
                }
            }
        } else {
            // sort by customerId
            PlaneSeat[] sorted = sortSeats();
            for (PlaneSeat planeSeat : sorted) {
                if (planeSeat.isOccupied()) {
                    System.out.println("SeatID " + planeSeat.getSeatID() + " assigned to CustomerID "
                            + planeSeat.getCustomerID() + ".");
                }
            }
        }
    }

    public void assignSeat(int seatId, int cust_id) {
        // assign index to tally with seatId
        if (!this.seat[seatId - 1].isOccupied()) {
            this.seat[seatId - 1].assign(cust_id);
            this.numEmptySeat--;

            System.out.println("Seat Assigned!");
        } else {
            System.out.println("Seat already assigned to a customer.");
        }
    }

    public void unAssignSeat(int seatId) {
        if (this.seat[seatId - 1].isOccupied()) {
            this.seat[seatId - 1].unAssign();
            this.numEmptySeat++;
            System.out.println("Seat Unassigned!");
        } else {
            System.out.println("Seat already empty.");
        }
    }
}