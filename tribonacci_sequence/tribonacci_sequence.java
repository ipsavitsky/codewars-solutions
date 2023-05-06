import java.util.stream.DoubleStream;
import java.util.Arrays;

public class Xbonacci {
    private DoubleStream trib(double[] signature) {
        return DoubleStream.generate(
            () -> { 
                double res = signature[0] + signature[1] + signature[2]; 
                signature[0] = signature[1];
                signature[1] = signature[2];
                signature[2] = res;
                return res;
            });
    }

    public double[] tribonacci(double[] s, int n) {
        return DoubleStream.concat(Arrays.stream(s), trib((s))).limit(n).toArray();
    }
}