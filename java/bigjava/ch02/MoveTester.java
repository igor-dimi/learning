import java.awt.Rectangle;

public class MoveTester {
    public static void main(String[] args) {
        Rectangle box = new Rectangle(5, 10, 20, 30);
        box.translate(15, 25);
        Rectangle box2 = box;
        

        System.out.println("x: " + box.getX());
        System.out.println("Expected: 20");
        System.out.print(box2);
        System.out.print(box);
    }
    
}
