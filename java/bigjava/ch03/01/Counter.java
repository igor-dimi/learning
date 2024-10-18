/**
 * This class models a tally counter
 */
public class Counter {
    private int count;

    /**
     * Gets current value of this counter
     * @return the current value
     */
    public int getCount() {return count;}

    /**
     * Advances the value of this counter by 1.
     */
    public void click() {count++;}

    /**
     * Resets the value of this counter to 0.
     */
    public void reset() {count = 0;}
}
