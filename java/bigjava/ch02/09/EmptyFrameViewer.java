import javax.swing.JFrame;

public class EmptyFrameViewer
{
    public static void main(String[] args) {
        JFrame f = new JFrame();
        f.setSize(300, 400);
        f.setTitle("An empty frame");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }
}