public class PicScaleDemo {
    public static void main(String[] args)
    {
        Picture p = new Picture();
        p.load("queen-mary.png");
        p.scale(200, 200);
    }
}
