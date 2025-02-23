/**
 * Tests Menu Class
 */
public class MenuTester
{
    /**
     * @param args not used
     */
    public static void main(String[] args)
    {
        Menu mainMenu = new Menu();
        mainMenu.addOption("Open New Account");
        mainMenu.addOption("Log into existing account");
        mainMenu.addOption("Help");
        mainMenu.addOption("Quit");
        mainMenu.display();
    }
}