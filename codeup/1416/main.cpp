#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    bool bit = false;
    int n; cin >> n;

    for(int i=31;i>=0;i--){
        int b = 1 << i;
        // 현재 비트가 0인 경우
        if(~n & b && bit) cout << 0;

        // 현재 비트가 1인 경우
        if(n & b){
            cout << 1;
            bit = true;
        }
    }
    // bit == false 인 경우는 n이 0일 때
    if(!bit)cout << 0;

    return 0;
}
