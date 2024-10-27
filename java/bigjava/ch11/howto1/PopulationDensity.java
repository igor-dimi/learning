import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class PopulationDensity {
    public static void main(String[] args) throws FileNotFoundException
    { 
        // Open input files
        Scanner in1 = new Scanner(new File("worldpop.txt"));
        Scanner in2 = new Scanner(new File("worldarea.txt"));

        // Open output file
        PrintWriter out = new PrintWriter("world_pop_density.txt");

        CountryInfo populationInfo = new CountryInfo();
        CountryInfo areaInfo = new CountryInfo();
        // Read lines from each file
        while (in1.hasNextLine() && in2.hasNextLine()) {
            populationInfo.setInfo(in1.nextLine());
            areaInfo.setInfo(in2.nextLine());

            // Compute and print the population density
            double density = 0;
            double area = areaInfo.getValue();
            if (area != 0) {
                density = populationInfo.getValue() / area;
            }
            out.printf("%-40s%15.2f%n", populationInfo.getName(), density);

        }
        in1.close();
        in2.close();
        out.close();
    }
    
}
