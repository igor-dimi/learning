import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner; 


/**
 * This program reads a file with numbers, and writes to numbers to another file,
 * lined up in a column, and followed by their total
 */
public class Total
{
    public static void main(String[] args) throws FileNotFoundException
    {
        // Prompt for the input and output file names
        Scanner consoleIn = new Scanner(System.in);
        System.out.print("Input file: ");
        String inputFileName = consoleIn.next();
        System.out.print("Output file: ");
        String outputFileName = consoleIn.next();

        //Construct the Scanner and PrintWriter objects for reading and writing
        File f = new File(inputFileName);
        Scanner in = new Scanner(f);
        PrintWriter out = new PrintWriter(outputFileName);

        double total = 0;

        while(in.hasNextDouble()) {
           double val = in.nextDouble();
           out.printf("%15.2f%n", val);
           total += val;
        }

        out.printf("Total: %8.2f%n", total);

        in.close();
        out.close();
    }
}