#include <iostream>
using namespace std;

int main() {
	int i,a[200],s,carry,x,n,j,m;
	a[0]=1;
	m=1;
	carry =0;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=0;j<m;j++){
			x=a[j]*i + carry;
			a[j] = x%10;
			carry = x/10;
		}
	while(carry>0){
		a[m] = carry%10;
		m++;
		carry = carry/10;
	}	
	}
	for(i=m-1;i>=0;i--)
	 cout<<a[i];
	return 0;
}
