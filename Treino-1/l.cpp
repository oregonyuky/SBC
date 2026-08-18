#include <bits/stdc++.h>
#define pb push_back
using namespace std;
const int mxN = 2e5+1;
vector<int> v[mxN];
void solve(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
    #endif
    int n, m, ai, bi;
    cin >> n >> m;
    while(n--){
        cin >> ai >> bi;
        if(m-ai>=0)v[m-ai].pb(bi);
    }
    priority_queue<int> pq;
    int sum = 0;
    for(int i=m;i>=0;i--){
        while(!v[i].empty()){
            pq.push(v[i].back());
            v[i].pop_back();
        }
        if(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
    }
    cout << sum << endl;
}
int main(){
    solve();
}