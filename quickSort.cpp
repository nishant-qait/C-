#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int *a,int l,int r){
	int pIndex = l;
	int pivot = a[r];
	for(int i=l;i<r;i++){
		if(a[i]<=pivot){
			swap(a[i],a[pIndex]);
			pIndex++;
		}
	}
   swap(a[pIndex],a[r]);
   return pIndex;
}
void quickSort(int *a,int l,int r){
	int partitionIndex;
	if(l<r){
		partitionIndex = partition(a,l,r);
		quickSort(a,l,partitionIndex-1);
		quickSort(a,partitionIndex+1,r);
	}
}
int main() {
    int a[1000],i,n;
    cin>>n;
    for(i=0;i<n;i++)
     cin>>a[i];
     quickSort(a,0,n-1);
    for(i=0;i<n;i++)
     cout<<a[i]<<" ";
     
	return 0;
}
