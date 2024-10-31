/**
 * A bank account has a balance and a mechanism for applying interest fee
 * at the end of the month
 */
public class SavingsAccount extends BankAccount
{
    private double interestRate;
    private double minBalance;

    /**
     * Constructs a savings account with a zero balance.
     */
    public SavingsAccount(int ID)
    {
        super(ID);
        interestRate = 0;
        minBalance = 0;
    }

    /**
     * Constructs a savings account with a interest rate given in percent.
     * @param interestRate the monthly interest rate of the account in percent
     */
    public SavingsAccount(int ID, double interestRate)
    {
        super(ID);
        this.interestRate = interestRate;
    }

    /**
     * Sets the interest rate for this account.
     * @param rate the monthly interest rate in percent
     */
    public void setInterestRate(double rate) {interestRate = rate;}

    @Override
    public void withdraw(double amount)
    {
        if (amount > getBalance()) {
            throw new IllegalArgumentException("Overdraft is not possible for savings accounts");
        }
        super.withdraw(amount);
        double balance = getBalance();
        if (balance < balance) minBalance = balance;
    }

    @Override
    public void monthEnd()
    {
        double interest = minBalance * interestRate / 100;
        deposit(interest);
        minBalance = getBalance();
    }

}