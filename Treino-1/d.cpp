#include <bits/stdc++.h>
#define mxN 10001
using namespace std;

int a[mxN];
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    int n, t, m, x;
    cin >> t;
    while(t--){
        cin >> n;
        m = -1;
        for (int i = 0; i < n;i++){
            cin >> x;
            m = max(m, x);
        }
        cout << m * n << endl;
    }
}
