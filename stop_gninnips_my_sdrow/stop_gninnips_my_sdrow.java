import java.util.stream.Collectors;
import java.util.Arrays;
import java.lang.StringBuilder;

public class SpinWords {
    public String spinWords(String sentence) {
        return Arrays.asList(sentence.split(" "))
            .stream()
            .map(v -> v.length() >= 5 ? new StringBuilder(v).reverse().toString() : v)
            .collect(Collectors.joining(" "));
    }
}
