#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int a[n];
    int ans=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        ans^=a[i];
    }
    cout<<ans<<endl;
    return 0;
}
