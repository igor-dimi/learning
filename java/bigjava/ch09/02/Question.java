/**
 * A question with a text and an answer
 */
public class Question
{
    private String question;
    private String answer;

    /**
     * Constructs a question with empty question answer
     */
    public Question()
    {
        question = "";
        answer = "";
    }

    /**
     * Sets the question text
     * @param question the text of this question.
     */
    public void setQuestion(String question)
    {
        this.question = question;
    }

    /**
     * Sets the answer of the question
     * @param answer the answer text of the question
     */
    public void setAnswer(String answer) {
        this.answer = answer;
    }

    /**
     * Checks given response for correctness
     * @param response the response to check
     * @return true if and only if the response was correct
     */
    public boolean checkResponse(String response) {return response.equals(answer);}

    /**
     * Displays this question
     */
    public void display() {System.out.println(question);}
    


}