public class PalindromeNumber {
    static boolean isPalindromeNumber(int n){
        int reverse=0;
        int temp =n;
        while(temp>0){
            int x = temp%10;
            temp = temp/10;
            reverse = reverse*10 + x;
        }

        return reverse==n;
    }

    public static void main(String[] args) {
        int number = 2332;
        System.out.println(isPalindromeNumber(number));
    }
    
}
