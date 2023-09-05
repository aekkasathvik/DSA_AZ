#include<bits/stdc++.h>
using namespace std;

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
        multiset<int,greater<int>>mt;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=0;i<n;i++) {
            mt.insert(a[i]);
            if(i>=k) {
                mt.erase(mt.find(a[i-k]));
            }
            if(i>=k-1) {
                cout<<*(mt.begin())<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
