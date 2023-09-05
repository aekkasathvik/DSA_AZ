#include<bits/stdc++.h>
using namespace std;
int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
        int n,q;
        cin>>n>>q;
        int a[n],p[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        p[0]=a[0];
        for(int i=1;i<n;i++) {
            p[i]=p[i-1]+a[i];
        }
        //all queires 
       while(q--) {
        int m;
        cin>>m;
        int l=0,h=n-1;
        int ans=0;
        //binary search for ans
        while(l<=h) {
            int mid=(l+h)/2;
            if(m>=p[mid]) {
                ans=mid+1;
                l=mid+1;
            }
            else
                h=mid-1;
        }
      cout<<ans<<endl;
       }
    return 0;
}
