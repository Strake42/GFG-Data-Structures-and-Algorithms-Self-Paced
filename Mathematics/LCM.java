class LCM{

   /*  static int lcm(int a, int b){
        int ans = Math.max(a,b);
        while(true){
            if(ans%a==0 && ans%b==0)
                return ans;
         ans++;
        }
    }*/

    static int gcd(int a, int b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }

    static int lcm(int a, int b){
        return (a*b)/gcd(a,b);
    }

    public static void main(String[] args) {
        int a=4,b=5;
        System.out.println(lcm(a,b));
    }
}