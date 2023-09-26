public class Kata{
    public static int[] countBy(int x, int n){
        int[] res = new int[n];
        int sum = x;

        for (int i = 0; i < n; ++i) {
            res[i] = sum;
            sum += x;
        }

        return res;
    }
}
