#include<bits/stdc++.h>
using namespace std;
int k,n;
int a[100000];

int check(int x) {
    int seated=0;
    for(int i=1;i<n;i++) {
        if(a[i]-a[i-1]>=x)
            seated++;
    }
    if(seated>=k)
        return 1;
    return 0;
}
int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T;
    while (T--) {
        cin>>n>>k;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        int l=0,h=a[n-1]-a[0];
        cout<<a[n-1];
        int ans=0;
        while(l<=h) {
            int mid=l+(h-l)/2;
            if(check(mid)==1) {
                ans=mid;
                l=mid+1;
            }
            else {
                h=mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
