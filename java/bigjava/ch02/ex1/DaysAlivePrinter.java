import java.util.Day

public class DaysAlivePrinter
{
    public static void main(String[] args) {
        Day igorBD = new Day(1993, 10, 16);
        Day today = new Day();
        System.out.println("Today: " + today.toString());
        int daysAlive = today.daysFrom(igorDB);
        System.out.println("Days alive: " + daysAlive);
    }
}