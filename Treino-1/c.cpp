#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    int n, t;
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 1; i <= n;i++){
            cout << i << " ";
        }
        cout << "\n";
    }
}
