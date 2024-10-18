import javax.swing.JFrame;


public class RectangleViewer {
    public static void main(String[] args) {
        JFrame f = new JFrame();

        f.setSize(300, 400);
        f.setTitle("Two rectangles");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        RectangleComponent comp = new RectangleComponent();
        f.add(comp);

        f.setVisible(true);

    }
}
