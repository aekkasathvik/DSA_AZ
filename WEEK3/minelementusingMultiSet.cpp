#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	IOS
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
	}
	multiset<int>ms;
	for(int i=0;i<k;i++) {
		ms.insert(a[i]);
	}
	cout<<*(ms.begin())<<" ";
	for(int i=k;i<n;i++) {
		ms.insert(a[i]);
		if(i-k>=0) {
			ms.erase(ms.find(a[i-k]));
		}
		cout<<*(ms.begin())<<" ";
	}

}