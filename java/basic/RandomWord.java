import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;
import edu.princeton.cs.algs4.StdRandom;

public class RandomWord {
    public static void main(String[] args) {
        int i = 1;
        String finalWord = "string";
        do {
          String a = StdIn.readString();
          if (StdRandom.bernoulli(1/i)) {
            finalWord = a;
          }
          i++;
        } while (!(StdIn.isEmpty()));

        StdOut.println(finalWord);
    }
} 