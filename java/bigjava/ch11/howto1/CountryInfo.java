import java.util.Scanner;
/**
 * Describes a value that is associated with a country
 */
public class CountryInfo {
    private String name;
    private double value;

    /**
     * Constructs an empty CountryInfo object
     */
    public CountryInfo() {name = ""; value = 0;}

    /**
     * Constructs a CountryValue from an input line
     * @param line a line containing a country name, followed by a value
     */
    public CountryInfo(String line)
    {
       setInfo(line); 
    }

    /**
     * Sets the country name and info
     * @param line the line string from which country info is parsed
     */
    public void setInfo(String line) 
    {
        Scanner lineScanner = new Scanner(line);
        name = lineScanner.next(); //Read first word
        // Add more words to name until number encountered
        while (!lineScanner.hasNextDouble()) {
            name += " " + lineScanner.next();
        }
        value = lineScanner.nextDouble();
    }

    /**
     * Gets the country name
     * @return the country name
     */
    public String getName() {return name;}

    /**
     * Gets the associated value.
     * @return the value associated with the country
     */
    public double getValue() {return value;}

    public static void main(String[] args) {
        
    }
}
