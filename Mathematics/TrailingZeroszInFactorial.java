class TrailingZeroszInFactorial{

    static int countZeroes(int n){
        int ans =0;
        for(int i=5; i<=n; i=i*5)
            ans = ans + n/i;
    return ans;
    }

    public static void main(String[] args) {
        int number = 20;
        System.out.println(countZeroes(number));
    }
}