#include<iostream>

using namespace std;

int main(){
	int T,N,K, i = 0;
	cin>>T;
	while(T!=0){
		cin>>N>>K;
		++i;
		if(K != 0 && T%2 != 0){
			cout<<"Case #"<<i<<":"<<" ON"<<endl;
		}
		else{
			cout<<"Case #"<<i<<":"<<" OFF"<<endl;
		}

		T--;
	}
	return 0;
}