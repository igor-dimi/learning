/**
 * A bank account has a balance and a mechanism for applying interest
 * or fees at the end of the month
 */
public abstract class BankAccount
{
    private double balance;
    private int accountID;

    /**
     * Constructs a bank account with zero balance
     */
    public BankAccount(int ID) {balance = 0; accountID = ID;}

    /**
     * Makes a deposit into this account
     * @param amount the amount of the deposit
     */
    public void deposit(double amount)
    {
        if (amount < 0) {
            throw new IllegalArgumentException("Amount must be positive.");
        }
        balance += amount;
    }

    /**
     * Makes a withdrawal from this account, or charges a penalty
     * if sufficient funds are not available.
     * @param amount the amount of the withdrawal.
     */
    public void withdraw(double amount)
    {
        if (amount < 0) {
            throw new IllegalArgumentException("Amount must be positive.");
        }
        balance -= amount;
    }

    /**
     * Carries out the end of month processing that is appropriate
     * for this account
     */
    public abstract void monthEnd();

    /**
     * Gets teh current balance of this bank account.
     * @return the current balance
     */
    public double getBalance() {return balance;}

    /**
     * Gets the ID of this account.
     * @return the ID of this account
     */
    public int getID() {return accountID;}

    /**
     * implements string representation of this accout
     */
    public String toString()
    {
        return "ID: " + accountID + ", Balance: "  + balance;
    }
}