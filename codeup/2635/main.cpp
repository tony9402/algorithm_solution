#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll N; cin >> N;
    ll sum = 0;
    for(ll i = 1; i * i <= N; i++){
        if(N % i == 0) {
            sum += i;
            if(i * i != N) sum += N / i;
        }
    }
    cout << sum;

    return 0;
}
