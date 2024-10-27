import java.io.File;
import java.io.IOException;
import java.util.Scanner;


/**
 * Reads a data set from a file. The file must have the format
 * numberOfValues
 * value1
 * value2
 */
public class DataSetReader {


    private double[] data;

    public double[] readFile(String filename) throws IOException
    {
        File inFile = new File(filename);

        try (Scanner in = new Scanner(inFile))
        {
            readData(in);
            return data;
        }
    }
    
}
