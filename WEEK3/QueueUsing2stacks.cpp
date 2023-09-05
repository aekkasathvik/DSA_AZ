#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int tc;
	cin>>tc;
	while(tc--) {
		stack<int>s1,s2;
		int q;
		cin>>q;
		while(q--) 
		{string s;
		cin>>s;
		if(s=="push") {
			int x;
			cin>>x;
			s1.push(x);
		}
		else if(s=="pop") {
			if(s2.empty()){
				while(s1.empty()==false) {
					s2.push(s1.top());
					s1.pop();
				}
			}
			if(!s2.empty()) {
				int frontelement=s2.top();
				s2.pop();
				cout<<frontelement<<endl;
			}

		}
		else {
			if(s2.empty()){
				while(s1.empty()==false) {
					s2.push(s1.top());
					s1.pop();
				}
			}
			if(!s2.empty()) {
				int frontelement=s2.top();
				cout<<frontelement<<endl;
			}

			}
		}
}
	return 0; 
}