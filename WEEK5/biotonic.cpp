#include<bits/stdc++.h>
using namespace std;
using lli =long long ;
int n;
 lli a[100000];
 int binsearch(int l,int h ,int x) {
    while(l<=h) {
        int mid=(l+h)/2;
        if(a[mid]==x) {
            return mid;
        }
        else if(a[mid]<x) {
            l=mid+1;
        }
        else
            h=mid-1;
    }
    return -1;
 }
  int binsearch1(int l,int h ,int x) {
    while(l<=h) {
        int mid=(l+h)/2;
        if(a[mid]==x) {
            return mid;
        }
        else if(a[mid]<x) {
           h=mid-1;
        }
        else
            l=mid+1;
    }
    return -1;
 }

 int check(int x) {
        if(x==n-1)
            return 1;
        if( x!=n-1 && a[x]>a[x+1])
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
        int q;
        cin>>n>>q;
        for(int i=0;i<n;i++) 
            cin>>a[i];
         int pos=0;
         int l=0,h=n-1;
         while(l<=h) {
            int mid=(l+h)/2;
            if(check(mid)==1) {
                pos=mid;
                h=mid-1;
            }
            else
                l=mid+1;
         }
          while(q--) {
          int k;
          cin>>k;
         int pos1=binsearch(0,pos,k);
         int pos2=binsearch1(pos+1,n-1,k);
         if(pos1!=-1)
            cout<<pos1+1<<" ";
         if(pos2!=-1) 
            cout<<pos2+1;
        cout<<endl;
        }
    }

    return 0;
}
