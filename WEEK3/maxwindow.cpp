#include<bits/stdc++.h>
using namespace std;
struct monotonicDq {
    deque<int>dq;
    void insert(int x) {
        while(!dq.empty() && dq.front()<x) {
            dq.pop_back();
        }
        dq.push_back(x);
    }
    void remove(int x) {
        if(dq.front()==x){
            dq.pop_front();
        }
    }
    void getmax() {
        cout<<dq.front()<<" ";
    }
};
int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T;

    while (T--) {
        int n,k;
        cin>>n>>k;
        int a[n];
        monotonicDq mdq;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=0;i<n;i++) {
            mdq.insert(a[i]);
        if(i-k>=0) {
            mdq.remove(a[i-k]);
        }
        if(i>=k-1){
            mdq.getmax();
        }
        }
    cout<<endl;
    }

    return 0;
}
