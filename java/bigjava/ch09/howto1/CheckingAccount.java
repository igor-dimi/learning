/**
 * A checking account has a limited number of free deposits
 * and withdrawals.
 */
public class CheckingAccount extends BankAccount
{
    private int withdrawals;
    private final int FREE_WITHDRAWALS = 5;
    private final double WITHDRAWAL_FEE = 1.0;
    private final double OVERDRAFT_FEE  = 8.75;


    /**
     * Constructs a checking account with a zero balance
     */
    public CheckingAccount(int ID) 
    {
        super(ID);
        withdrawals = 0;
    }

    @Override
    public void withdraw(double amount)
    {
       if (amount > getBalance()) {
        super.withdraw(OVERDRAFT_FEE);
       }
       super.withdraw(amount); 
       withdrawals++;
       if (withdrawals > FREE_WITHDRAWALS) {
        super.withdraw(WITHDRAWAL_FEE);
       }
    }

    @Override
    public void monthEnd() {withdrawals = 0;}
}