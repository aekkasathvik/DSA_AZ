#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
int a[100000];


//check funciton
int check(int x){
    int numberofpainter=0;
    int timelefet=0;
    for(int i=0;i<n;i++) {
        if(timelefet>=a[i]) {
            timelefet-=a[i];
        }
        else {
            timelefet=x;
            numberofpainter++;
            if(timelefet<a[i])
                return 0;
            else
                timelefet-=a[i];
        }
    }
    if(numberofpainter<=k)
        return 1;
    else
        return 0;
}

signed main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    signed T;
    cin >> T;
    while (T--) {
        cin>>n>>k;
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        int low=1,high=sum;
        int ans=0;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(check(mid)==1) {
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
