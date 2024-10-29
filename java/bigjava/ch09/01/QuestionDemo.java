import java.util.Scanner;

/**
 * This program shows a simple quiz with one question
 */
public class QuestionDemo {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        Question q = new Question();
        q.setQuestion("Who was the inventor of java?");
        q.setAnswer("James Gosling");

        q.display();
        System.out.println("your answer: ");
        String response = in.nextLine();
        System.out.println(q.checkResponse(response));
    }
    
}
