#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

struct monotonicDq {
	IOS
	deque<int>dq;
	void insert(int x) {
		while(  !dq.empty() &&dq.back()<x) {
			dq.pop_back();
		}
		dq.push_back(x);
	}

	void remove(int x) {
		if(dq.front()==x) {
			dq.pop_front();
		}
	}

	void getMax() {
		cout<<dq.front()<<" ";
	}
};
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
	monotonicDq mt;
	for(int i=0;i<n;i++) {
		mt.insert(a[i]);

		if(i-k>=0) {
			mt.remove(a[i-k]);
		}
		if(i>=k-1){
			mt.getMax();
		}

	}
	
}