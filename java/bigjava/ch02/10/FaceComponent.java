import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.security.spec.EllipticCurve;

import javax.swing.JComponent;

public class FaceComponent extends JComponent{

    public void paintComponent(Graphics g)
    {
        Graphics2D g2 = (Graphics2D) g; 

        Ellipse2D.Double head = new Ellipse2D.Double(5, 10, 100, 150);
        g2.draw(head);


        // draw the eyes
        g2.setColor(Color.GREEN);
        Ellipse2D.Double eye = new Ellipse2D.Double(25, 70, 15, 15);
        g2.fill(eye);
        eye = new Ellipse2D.Double(75, 70, 15, 15);
        g2.fill(eye);

        // draw the mouth
        Line2D.Double mouth = new Line2D.Double(30, 110, 80, 110);
        g2.setColor(Color.RED);
        g2.draw(mouth);

        // greeting
        g2.setColor(Color.BLUE);
        g2.drawString("Hello, World!", 5, 175);
    }

}
