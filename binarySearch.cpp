#include <bits/stdc++.h>
using namespace std;
void binarySearch(int *a,int n,int x){
	int l,r,m;
	l=0,r=n-1;
	while(l<=r){
		m=l+(r-l)/2;
		if(a[m]==x){
			cout<<"FOUND";
			return ;
			
		}
		else if(a[m]<x)
			l=m+1;
		else
			r=m-1;
	}
	cout<<"NOT FOUND";
}
int main() {
	int i,n,x;
	int a[]={12,45,98,45,65,789,13,31,154,321};
	n=sizeof(a)/sizeof(int);
	x=98;
	sort(a,a+n);
	binarySearch(a,n,x);
	return 0;
}
