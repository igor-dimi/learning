import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;
import javax.sound.midi.SysexMessage;



/**
 * This program reads a file containing numbers
 * and analyzes its contents. If hte file doesn't exist
 * or contains strings that are not numbers, an error message
 * is displayed.
 */
public class DataAnalyzer {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        DataSetReader  reader = new DataSetReader();

        boolean done = false;
        while(!done) {
            try {
                System.out.println("Enter file name: ");
                String filename = in.next();


                double[] data = reader.readFile(filename);
                double sum = 0;
                for (double d : data) {sum += d;}
                System.out.println("The sum is " + sum);
                done = true;
            } 
            catch (FileNotFoundException e){
                    System.out.println("File not found.");
            } 
            catch (BadDataException e) {
                System.out.println("Bad data: " + e.getMessage());
            }
            catch (IOException e)
            {
                e.printStackTrace();
            }
        }
    }
}
