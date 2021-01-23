#include<bits/stdc++.h>

using namespace std;

const int dy[] = {-1,1,0,0,-1,-1,1,1};
const int dx[] = {0,0,-1,1,-1,1,-1,1};

int Map[27][27], ans[27][27];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 25;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> Map[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(Map[i][j] == 0){ // 생명이 없는 칸
                int cnt = 0; // 주위에 생명을 새는 것
                for(int k=0;k<8;k++) 
                    cnt += Map[i + dy[k]][j + dx[k]];

                if(cnt == 3) ans[i][j] = 1; // 조건 1
            }
            else { // 생명이 있는 칸
                int cnt = 0; // 주위에 생명을 새는 것
                for(int k=0;k<8;k++)  
                    cnt += Map[i + dy[k]][j + dx[k]];

                if(cnt >= 4 || cnt <= 1) ans[i][j] = 0; // 조건 2
                else ans[i][j] = 1; //조건 3 -> 조건 2의 반대
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
