/**
 * @brief https://www.codewars.com/kata/515e271a311df0350d00000f
 */
import java.util.Arrays;

public class Kata {
    public static int squareSum(int[] n) {
        return Arrays.stream(n).map((x) -> x * x).sum();
    }
}