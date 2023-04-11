import java.util.*;

class CountDigits{

     static int countDigits(int x){

        int digits =0;
        while(x>0){
            x=x/10;
            digits++;
        }
        return digits;
    }

    public static void main(String[] args) {
        int number = 2506;
        System.out.println(countDigits(number));
    }
}