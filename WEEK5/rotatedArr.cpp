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
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) {
        cin>>a[i];
     }
     int low=0,high=n-1,ans=0;
     while(low<=high) {
        int mid=(low+high)/2;
        if(a[mid]<a[0]) {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
     } 
     cout<<ans<<"\n";
    }

    return 0;
}
