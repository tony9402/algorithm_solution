import java.util.*;
import java.lang.*;
import java.io.*;

public class Main{
    static int [] arr = new int[9];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = 9;
        int total = 0;
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
            total += arr[i];
        }
        Arrays.sort(arr);

        boolean found = false;
        for(int i=0;!found && i<n;i++){
            for(int j=i+1;!found && j<n;j++){
                if(total - arr[i] - arr[j] == 100){
                    found = true;
                    for(int k=0;k<n;k++){
                        if(k == i || k == j)continue;
                        System.out.println(arr[k]);
                    } 
                }
            }
        } 
    }
}
