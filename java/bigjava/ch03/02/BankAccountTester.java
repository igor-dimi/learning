/**
 * A class to test the BankAccount class
 */
public class BankAccountTester
{
    /**
     * Tests the methods of the BankAccount class
     * @param args not sued
     */
    public static void main(String[] args)
    {
        BankAccount checking01 = new BankAccount();
        checking01.deposit(2000);
        checking01.withdraw(500);
        System.out.println(checking01.getBalance());
        System.out.println("Expected: 1500"); 
    }
}