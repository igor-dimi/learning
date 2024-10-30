import java.util.Scanner;

/**
 * This program shows a simple quiz with one question
 */
public class QuestionDemo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        ChoiceQuestion q = new ChoiceQuestion();
        q.setQuestion("What was the original name of the Java Language?");
        q.addChoice("*7", false);
        q.addChoice("Duke", false);
        q.addChoice("Oak", true);
        q.addChoice("Gosling", false);
       
        q.display();
        System.out.println("Your answer: ");
        String response = in.nextLine();
        System.out.println(q.checkResponse(response));
    }
    
}
