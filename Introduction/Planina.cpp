#include<iostream>

using namespace std;

int main(){
	int iterations;
	long long int points = 2, final;
	cin>>iterations;
	for(int i = 0; i<iterations; i++){
		points = points + (points - 1);
	}
	final = (points*points);
	cout<<final;
	return 0;
}