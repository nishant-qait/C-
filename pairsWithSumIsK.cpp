#include <iostream>
using namespace std;

int main() {
	long long int i,n,k,j,a[10000]={0},b[100];
	cin>>n>>k;
	for(i=0;i<n;i++){
	 cin>>b[i];
	 a[(k-b[i])]=1;
	}
	for(i=0;i<n;i++){
		if(a[b[i]]==1)
		  cout<<b[i]<<","<<(k-b[i])<<"  ";
	   	  
	}
	return 0;
}
