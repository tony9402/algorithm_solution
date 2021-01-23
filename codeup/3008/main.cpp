#include<bits/stdc++.h>

using namespace std;

int v[9], n = 9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int total = 0, e_idx_1 = 0, e_idx_2 = 0;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        total += v[i];
    }
    sort(v, v + n);

    bool found = false;
    for(int i=0;!found && i<n;i++){
        for(int j=i+1;!found && j < n; j++){
            if(total - v[i] - v[j] == 100){
                e_idx_1 = i;
                e_idx_2 = j;
                found = true;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(i == e_idx_1 || i == e_idx_2)continue;
        cout << v[i] << '\n';
    }

    return 0;
}
