public class Solution {
    private int prog_sum(int n) { return n * (n + 1) / 2; }

    private int amount_of_divisions_in_range(int number, int n) {
        return number / n - (number % n == 0 ? 1 : 0);
    }

    public int solution(int number) {
        return 3 * prog_sum(amount_of_divisions_in_range(number, 3)) +
            5 * prog_sum(amount_of_divisions_in_range(number, 5)) -
            15 * prog_sum(amount_of_divisions_in_range(number, 15));
    }
}