import java.util.Arrays;

public class Positive {
    public static int sum(int[] arr) {
        return Arrays.stream(arr).filter(i -> i > 0).sum();
    }
}