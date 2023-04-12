public class FactorialOfNumber {

    // Itrative
    static int itrativeFactorial(int n) {
        int ans = 1;
        for (int i = 2; i <= n; i++) {
            ans = ans * i;
        }

        return ans;
    }

    // Recursive
    static int recursiveFactorial(int n) {
        if (n <= 1)
            return 1;

        return n * recursiveFactorial(n - 1);
    }

    public static void main(String[] args) {
        int number = 5;
        System.out.println(itrativeFactorial(number));
        System.out.println(recursiveFactorial(number));
    }
}
