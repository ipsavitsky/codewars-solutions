import java.util.Arrays;
import java.util.stream.DoubleStream;

public class Xbonacci {
    private DoubleStream xbon(double[] signature) {
        return DoubleStream.generate(() -> {
            double res = Arrays.stream(signature).sum();
            for (int i = 0; i < signature.length - 1; ++i) {
                signature[i] = signature[i + 1];
            }
            signature[signature.length - 1] = res;
            return res;
        });
    }

    public double[] xbonacci(double[] s, int n) {
        return DoubleStream.concat(Arrays.stream(s), xbon((s)))
            .limit(n)
            .toArray();
    }
}