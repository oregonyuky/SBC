#include <bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int a[mxN];
int c[mxN];
int v[mxN];
class VS{
    public: 
    int version;
    VS(int n){
        version = 0;
        memset(c, 0, n * sizeof(int));
        memset(v, 0, n * sizeof(int));
    }
    void clear(){
        version++;
    }
    int getValue(int i){
        return (v[i] == version ? c[i] : 0);
    }
    void inserir(int i){
        v[i] = version;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int n, m, h, t, bi, ci;
    cin >> t; 
    while(t--){
        cin >> n >> m >> h;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        VS VS(n);
        for(int i=0;i<m;i++){
            cin >> bi >> ci;
            if(a[bi] + VS.getValue(bi) + ci <= h){
                c[bi] += ci;
                VS.inserir(bi);
            }
            else
                VS.clear();
        }
        for(int i=0;i<n;i++){
            cout << a[i] + VS.getValue(i) << " ";
        }
        puts("");
    }
}