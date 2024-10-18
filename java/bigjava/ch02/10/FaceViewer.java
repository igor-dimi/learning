import javax.swing.JFrame;

public class FaceViewer {
    public static void main(String[] args) {
        JFrame fr = new JFrame();
        fr.setSize(150, 250);
        fr.setTitle("An Alien Face");
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        FaceComponent comp = new FaceComponent();
        fr.add(comp);
    
        fr.setVisible(true);
    }    
}
