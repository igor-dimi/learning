public class DaysAlivePrinter
{
   public static void main(String[] args)
   {
      Day igorBD = new Day(1993, 16, 10);
      Day today = new Day();
      System.out.print("Today: ");
      System.out.println(today.toString());
      int daysAlive = today.daysFrom(igorBD);
      System.out.print("Days alive: ");
      System.out.println(daysAlive);
   }
}

