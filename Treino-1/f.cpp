#include <bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int a[mxN];
int v[mxN];
class VS{
    public: 
    int version;
    VS(){
        version = 0;
        v = {0};
    }
    void clear(){
        version++;
    }
    void getValue(int i, int cur_v){
        return (v[i] == cur_v ? a[i] : 0);
    }
    void inserir(int i, int n, int cur_v){
        if(v[i] < cur_v){
            v[i] = 0;
        } else{
            v[i] = n;
        }
    }
}
int V(int n){

}
int main(){
    int n, m, h, t, bi, ci;
    cin >> t; 
    while(t--){
        cin >> n >> m >> h;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        VS();
        for(int i=0;i<m;i++){
            cin >> bi >> ci;
            
        }
    }
}