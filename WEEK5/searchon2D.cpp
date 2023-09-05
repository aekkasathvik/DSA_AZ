#include<bits/stdc++.h>
using namespace std;
using lli=long long;
lli n,m;
int k;
vector<lli>a,b;

int check(lli x) {
    //check whether  total elements >=x are >=k
    lli ele=0;
    for(int i=0;i<n;i++) {
         ele+=(upper_bound(b.begin(),b.end(),x-a[i])-b.begin());
    }
    if(ele>=k) {
        return 1;
    }
    else
        return 0;

}
//BS on 2D array
int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T;
    while (T--) {
        cin>>n>>m>>k;
        a.resize(n);
        b.resize(m);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=0;i<m;i++) {
            cin>>b[i];
        }
        if(n>m) {
            swap(n,m);
            swap(a,b);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        lli high=a[n-1]+b[m-1];
        lli low=a[0]+b[0];
        lli ans=0;
        while(low<=high) {
            lli mid=(low+high)/2;
            if(check(mid)==1){
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
