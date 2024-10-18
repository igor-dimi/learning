import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import javax.swing.JComponent;



/**
 * A component that draws two rectangles
 */
public class RectangleComponent extends JComponent{
    public void paintComponent(Graphics g)
    {
        Graphics2D g2 = (Graphics2D) g;

        Rectangle r = new Rectangle(5, 10, 20, 30);

        g2.draw(r);
        r.translate(15, 25);
        g2.draw(r);
    }
}
