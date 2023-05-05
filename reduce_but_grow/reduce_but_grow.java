/**
 * @brief https://www.codewars.com/kata/57f780909f7e8e3183000078
 */
import java.util.Arrays;

public class Kata {

    public static int grow(int[] x) {
        return Arrays.stream(x).reduce(1, (prod, cur) -> prod * cur);
    }
}