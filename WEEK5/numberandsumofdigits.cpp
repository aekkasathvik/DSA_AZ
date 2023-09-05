#include<bits/stdc++.h>
using namespace std;

int check(long long mid ,  long long  s) {
    long long temp=mid;
    long long sum=0;
        while(temp) {
            sum+=temp%10;
            temp=temp/10;
        }
    if(mid-sum<s)
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
        long long n,s;
        cin>>n>>s;
        long long low=1,high=n;
        long long sum=0;
        int ans=0;
         
        while(low<=high) {
            long long mid=(low+high)/2;
            if(check(mid,s)==1)
            {
                ans =mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        cout<<n-ans<<endl;
    }

    return 0;
}
