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

    /**
     * Reads all data
     * @param in the scanner that scans the data
     */
    private void readData(Scanner in) throws BadDataException
    {
        if (!in.hasNextInt()) {
            throw new BadDataException("Length expected");
        }
        int numberOfValues = in.nextInt();
        data = new double[numberOfValues];

        for (int i = 0; i < numberOfValues; i++) {readValue(in, i);}
    }

    /**
     * Reads one data value
     * @param in the scanner that scans the data
     * @param i the position of the value to read
     */
    private void readValue(Scanner in, int i) throws BadDataException
    {
        if (!in.hasNextDouble()) {
            throw new BadDataException("Data value expected");
        }
        data[i] = in.nextDouble();
    }

}
