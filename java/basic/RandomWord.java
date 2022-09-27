import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;
import edu.princeton.cs.algs4.StdRandom;

public class RandomWord {
    public static void main(String[] args) {
        int i = 1;
        String FinalWord = "string";
        do {
          String a = StdIn.readString();
          if(StdRandom.bernoulli(i)) {
            FinalWord = a;
          }
          i++;
        } while (!(StdIn.isEmpty()));

        StdOut.println(FinalWord);

        //for(int i = 0; i < a.length; i++) {

        //}
    }
} 