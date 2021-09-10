#include<iostream>

using namespace std;

int main(){
	long long int i, n, count = 0, aux;
	
	cin>>n;
	long long int array[n];
	for(i=0; i<n; i++){
		cin>>array[i];
	}
	i=0;
	while(1){
		if(i == n-1){
			break;
		}
		if(array[i]>array[i+1]){
				count += array[i]-array[i+1];
				array[i+1] = array[i];	
		}
		else{
			i++;
		}
	}
	cout<<count;
	return 0;
}
