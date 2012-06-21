import java.util.HashSet;
import java.math.BigInteger;

public class euler29 {

    public static void main(String[] args) {

        HashSet<BigInteger> mySet = new HashSet<BigInteger>();

        BigInteger temp;
        String tempStr;
        for(int a = 2; a <= 100; a++) {
            for(int b = 2; b <= 100; b++) {
                temp = new BigInteger("" + a);
                temp = temp.pow(b);
                mySet.add(temp);
            }
        }

        System.out.print(mySet.size());

        return;
    }

}
