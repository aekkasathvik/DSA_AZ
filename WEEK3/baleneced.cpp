#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	int tc;
	cin>>tc;
	while(tc--) {
	int depth=0;
	string s;
	cin>>s;
	int flag=0;
	int n=s.length();
	for(int i=0;i<n;i++) {
		if(s[i]=='(')
			depth++;
		else 
			depth--;
	}
	cout<<abs(depth)<<endl;
	}
}