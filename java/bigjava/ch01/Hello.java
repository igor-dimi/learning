import mypack.B;
public class Hello
{
    public static void main(String[] args)
    {
        var greeting = "hello";
        System.out.println(greeting);
        System.out.println("hello".length());
        System.out.println("hello".toUpperCase());
        var res = greeting.replace("hell", "h");
        System.out.println(greeting);
        System.out.println(res);
        A a = new A();
        B b = new B();
        // Rectangle box = new Rectangle(1, 2, 3, 4);
    }
}