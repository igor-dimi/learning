import java.util.ArrayList;

/**
 * A menu that is displayed on a console
 */
public class Menu
{
    
    private ArrayList<String> menuText = new ArrayList<String>();

    /**
     * Constructs a menu with no options.
     */
    public Menu()
    {
        // do nothing
    }

    /**
     * Adds an option to the end of this menu
     * @param option the option to add
     */
    public void addOption(String option)
    {
        menuText.add(option);
    } 

    /**Displays the menu on the console */
    public void display() 
    {
        for (int i = 0; i < menuText.size(); i++){
            System.out.println((i + 1) + ") " + menuText.get(i));
        }
    }
}