#include<iostream>

using namespace std;

int main(){
	int n, i, aux;
	cin>>n;
	int a[n+1];
	a[0]= 1;
	for(i=0; i<n-1; i++){
		cin>>aux;
		a[aux] = 1;
	}
	for(i=1; i<n+1; i++){
		if(a[i] != 1){
			cout<<i;
		}
	}
	return 0;
}
