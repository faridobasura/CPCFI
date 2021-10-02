#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int K, M, D, i;
	cin>>K;
	while(K > pow(2, i)){
		i++;
	}
	M = pow(2,i);
	while(true){
		D = M/2;
		if((K%D) == 0){
			cout<<M<<" "<<D;
			break;
		}
	}
	return 0;
}