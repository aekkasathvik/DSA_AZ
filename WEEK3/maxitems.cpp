#include <bits/stdc++.h>
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 int tc;
    cin>>tc;
    while(tc--) {
       int n,m;
       cin>>n>>m;
       int a[n];
       for(int i=0;i<n;i++) {
        cin>>a[i];
       }
       sort(a,a+n);
       int cnt=0;
       for(int i=0;i<n;i++) {
            if(a[i]<=m){
                m-=a[i];
                cnt++;
            }
       }
       cout<<cnt<<endl;

    }
return 0;
}
