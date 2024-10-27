import java.io.IOError;

/**
 * This class reports bad input data
 */
public class BadDataException extends IOException {
    public BadDataException() {}
    public BadDataException(String message) 
    {
        super(message);
    }
}
