#include <bits/stdc++.h>
#define ll long long
using namespace std;
    
const int mxN = 2e5+1;
int a[mxN];
int ca[mxN];
int av[mxN];
int cur;
bool is_visited(int pos){
    return av[pos] == cur;
}
int getV(int pos){
    if(is_visited(pos)) return ca[pos];
    return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    int t, n, m, h;
    cin >> t;
    while(t--){
        cin >> n >> m >> h;
        cur = 0;
        memset(av, 0, n * sizeof(int));
        memset(ca, 0, n * sizeof(int));
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        int x, y;
        for (int i = 0; i < m;i++){
            cin >> x >> y;
            int pos = x - 1;
            if((ll) a[pos] + getV(pos) + y <= h){
                if (is_visited(pos))
                    ca[pos] += y;
                else
                    ca[pos] = y;
                av[pos] = cur;
            }
            else
                cur++;
        }
        for (int i = 0; i < n;i++)
            cout << a[i] + getV(i) << " ";
        puts("");
    }
}

