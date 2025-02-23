
/**
 * A bank account has a balance that can be changed by deposits
 * and withdrawals.
 */
public class BankAccount {

    private double balance;

    /**
     * Constructs a bank account with zero balance
     */
    public BankAccount(){balance = 0;}

    /**
     * Constructs a bank accouint with a given initial balance
     * @param initialBalance the initial balance
     */
    public BankAccount(double initialBalance){balance = initialBalance;}
    
    /**
     * Deposits money to the bank account
     * @param amount the amount to deposit.
     */
    public void deposit(double amount){balance += amount;}

    /**
     * Withdraws money from the bank account.
     * @param amount the amount to withdraw.
     */
    public void withdraw(double amount){balance -= amount;}

    /**
     * Get the current balance of the bank account.
     * @return the current balance
     */
    public double getBalance(){return balance;}
}
