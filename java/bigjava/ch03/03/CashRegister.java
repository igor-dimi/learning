/**
 * A cash register computes the total amount of purchases and 
 * the change to be returned.
 */
public class CashRegister
{
    private double totalPurchase;
    private double payment;
    /**
     * Constructs a register with no money in it
     */
    public CashRegister(){}

    /**
     * Records the sale of an item
     * @param amount the pice of the item
     */
    public void recordPurchase(double amount){totalPurchase += amount;}

    /**
     * Process a payment received from the customer
     * @param amount the amount of the payment
     */
    public void receivePayment(double amount){payment += amount;}

    /**
     * Computes the change due and resets the machine for the next
     * customer.
     * @return the change due to the customer
     */
    public double giveChange()
    {
        double change = payment - totalPurchase;
        totalPurchase = payment = 0;
        return change;
    }
}