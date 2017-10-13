import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {
    public static boolean is_leap(BigInteger year) {
        return (!year.mod(new BigInteger("100")).equals(BigInteger.ZERO) || (year.mod(new BigInteger("400")).equals(BigInteger.ZERO)))
                && ((year.mod(new BigInteger("4")).equals(BigInteger.ZERO)));
    }

    public static boolean is_huluculu(BigInteger year) {
        return (year.mod(new BigInteger("15")).equals(BigInteger.ZERO));
    }

    public static boolean is_pseudo_bulukulu(BigInteger year) {
        return (year.mod(new BigInteger("55")).equals(BigInteger.ZERO));
    }

    public static void main(String[] args) {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String kambing = null;
        boolean first = true;
        try {
            while ((kambing = in.readLine()) != null) {
                if(!first)
                    System.out.print("\n");                
                BigInteger ka = new BigInteger(kambing);
                boolean leap = is_leap(ka), huluculu = is_huluculu(ka), bulukulu = is_pseudo_bulukulu(ka);
                if (!leap && !huluculu && (!leap || !bulukulu)) {
                    System.out.print("This is an ordinary year.\n");
                } else {
                    if (leap)
                        System.out.print("This is leap year.\n");
                    if (huluculu)
                        System.out.print("This is huluculu festival year.\n");
                    if (leap && bulukulu)
                        System.out.print("This is bulukulu festival year.\n");
                }

                first = false;
            }
        } catch (Exception e) {
            //TODO: handle exception
        }
    }
}