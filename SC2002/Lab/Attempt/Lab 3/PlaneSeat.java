public class PlaneSeat {
    private int seatId;
    private boolean assigned;
    private int customerId;

    public PlaneSeat(int seat_id) {
        this.seatId = seat_id;
        this.customerId = 0;
        this.assigned = false;
    }

    public int getSeatID() {
        return this.seatId;
    }

    public int getCustomerID() {
        return this.customerId;
    }

    public boolean isOccupied() {
        return this.assigned;
    }

    public void assign(int cust_id) {
        this.customerId = cust_id;
        this.assigned = true;
    }

    public void unAssign() {
        this.assigned = false;
        this.customerId = 0;
    }
}