#include <bits/stdc++.h>
#define mxN 3001
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
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        sort(a, a + n);
        int minS, maxS, cnt=1, maxCnt=-1, novoMaxS, novoMinS;
        for (int i = 0; i < n - 1; i++){
            if(i==0 || (i>=1 && a[i-1]+1 != a[i] && a[i-1] != a[i]))
                minS = a[i];
            if(a[i] + 1 == a[i+1] || a[i] == a[i+1]){
                maxS = a[i+1];
                if(a[i] != a[i+1])cnt++;
            } else {
                maxS = a[i];
                cnt = 1;
            }
            if(cnt > maxCnt){
                maxCnt = cnt;
                novoMaxS = maxS;
                novoMinS = minS;
            }
        }
        cout << novoMaxS - novoMinS + 1 << endl;
    }
}
