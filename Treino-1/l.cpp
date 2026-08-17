#include <bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
struct cmp{
    bool operator()(const pair<int,int>&a, const pair<int,int>&b){
        if(a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};
void teste(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    priority_queue<pair<int, int>, vector<pair<int,int>>, cmp> pq;
    int n, m, ai, bi, res=0;
    cin >> n >> m;
    while(n--){
        cin >> ai >> bi;
        pq.push({ai, bi});
        if(!pq.empty()){
            res += pq.top();
            pq.pop();
        }
    }
}
int main(){
    teste();
}