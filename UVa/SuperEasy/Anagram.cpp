#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int cases, i;
	string input;
	cin>>cases;
	for(i=0; i<cases; i++){
		cin>>input;
		sort(input.begin(), input.end());
		do{
			cout<<input<<endl;
		}while(next_permutation(input.begin(),input.end()));

	}
	return 0;
}