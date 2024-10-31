import java.lang.reflect.Array;
import java.util.Scanner;
import java.util.ArrayList;

public class AccountDemo
{
    public static void main(String[] args) {
        ArrayList<BankAccount> accounts = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            accounts.add(new CheckingAccount(i));
        }
        for (int i = 5; i < 10; i++) {
            accounts.add(new SavingsAccount(i, 0.75));
        }

        // Scanner in = new Scanner(System.in);
        // boolean done = false;

        // while (!done) {
        //     System.out.print("D)eposit W)ithdraw M)onth end Q)uit: ");
        //     String input = in.next();

        //     if (input.equals("D") || input.equals("W")){ // deposit or withdrawal
        //         System.out.print("Enter account number and amount: ");
        //         int num = in.nextInt();
        //         double amount = in.nextDouble();

        //         if (input.equals("D)")) {accounts.get(num).deposit(amount);}
        //         else {accounts.get(num).withdraw(amount);}

        //         System.out.println("Balance: " + accounts.get(num).getBalance());
        //     } 
        //     else if (input.equals("M")) { // month end processing
        //         int i = 0;
        //         for (BankAccount a : accounts) {
        //             a.monthEnd();
        //             System.out.println("Account " + i + "balance: " + a.getBalance());
        //             i++;
        //         }
        //     }
        //     else if (input.equals("Q")) {done = true;}
        //     else {System.out.println("invalid input. try again.");}
        // }

        // CheckingAccount acc = new CheckingAccount(1);
        // acc.deposit(10);
        // System.out.println(acc.getBalance());

        // SavingsAccount sa =  new SavingsAccount(2, 0.75);

        // ArrayList<BankAccount> accounts = new ArrayList<>();

        // accounts.add(acc);
        // accounts.add(sa);

        // sa.deposit(1000);

        // System.out.println(accounts.get(0).getBalance());
        // System.out.println(accounts.get(1).getBalance());

        Scanner in = new Scanner(System.in);
        int userInput;
        printMenu();
        userInput = in.nextInt();
        while (userInput != 4) {
            switch (userInput) {
                case 1, 2 -> {
                    System.out.print("Enter account id and amount: "); 
                    int id = in.nextInt();
                    double amount = in.nextDouble();
                    BankAccount acc = accounts.get(id);
                    if (userInput == 1) {
                        acc.deposit(amount);
                    }
                    else acc.withdraw(amount);
                    System.out.println(acc);
                }
                case 3 -> { 
                    for (BankAccount a : accounts) a.monthEnd();
                    for (BankAccount a : accounts) System.out.println(a);
                }
                default -> System.out.println("Invalid option. Try again.");
            }
            printMenu();
            userInput = in.nextInt();
        }

    }

    public static void printMenu()
    {
        System.out.println("[1]: Deposit");
        System.out.println("[2]: Withdraw");
        System.out.println("[3]: End of month");
        System.out.println("[4]: Quit");
    }
}