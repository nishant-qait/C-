#include <bits/stdc++.h>
using namespace std;

int main() {
	
	char s[21];
	cin>>s;
	char r[strlen(s)];
	for(int i=strlen(s)-1;i>=0;i--)
		r[strlen(s)-1-i]=s[i];
	cout<<r;
	return 0;
	
}
