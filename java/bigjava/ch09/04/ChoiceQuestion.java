import java.util.ArrayList;

public class ChoiceQuestion extends Question {

    public ChoiceQuestion()
    {
        choices = new ArrayList<>();
    }

    public ChoiceQuestion(String question)
    {
        super(question);
    }
    private ArrayList<String> choices;
    public void addChoice(String choice, boolean correct)
    {
        choices.add(choice);
        if (correct) {
            String choiceString = "" + choices.size();
            setAnswer(choiceString);
        }
    }

    @Override
    public void display()
    {
        super.display();
        for(int i = 0; i < choices.size(); i++) {
            int choiceNumber = i + 1;
            System.out.println(choiceNumber + ": " + choices.get(i));
        }
    }

}