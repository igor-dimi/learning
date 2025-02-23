import javax.swing.JFrame;

public class CarViewer
{
    public static void main(String[] args)
    {
        JFrame frame = new JFrame();

        frame.setSize(300, 4000);
        frame.setTitle("Two cars");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        CarComponent comp = new CarComponent();
        frame.add(comp);

        frame.setVisible(true);
    }
}