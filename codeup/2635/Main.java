import java.util.*;
import java.lang.*;
import java.io.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        long sum = 0;
        long n   = sc.nextLong();

        for( long i = 1; i * i <= n; i++){
            if( n % i == 0 ){
                sum += i;
                if(i * i != n) sum += n / i;
            }
        }

        System.out.print(sum);
    }
}
