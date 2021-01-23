import java.util.*;
import java.lang.*;
import java.io.*;

public class Main{
    static int [][] ans = new int[27][27];
    static int [][] Map = new int[27][27];

    static int [] dy = {-1,1,0,0,-1,-1,1,1};
    static int [] dx = {0,0,-1,1,-1,1,-1,1};
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int N = 25;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                Map[i][j] = sc.nextInt();
            }
        }

        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                int cnt = 0;
                for(int k=0;k<8;k++){
                    int nextY = i + dy[k];
                    int nextX = j + dx[k];
                    if(Map[nextY][nextX] == 1)
                        cnt += 1;
                }

                if( Map[i][j] == 0 && cnt == 3 ) ans[i][j] = 1;
                else if( Map[i][j] == 1 && 2 <= cnt && cnt <= 3) ans[i][j] = 1;
            }
        }

        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                System.out.printf("%d ", ans[i][j]);
            }
            System.out.println();
        }
    }
}
