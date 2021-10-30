#include<iostream>
#include<queue>

using namespace std;

int main(){
	priority_queue<int, vector<int>, greater<int>> aschil;
	priority_queue<int> deschil;
	int N,X, c, sum, gondola, auxmax, auxmin;

	cin>>N>>X;

	for(int i =0; i<N; i++){
		cin>>c;
		aschil.push(c);
		deschil.push(c);
	}
	sum = 0;
	gondola = 0;
	while(N>0){
		auxmin = aschil.top();
		auxmax = deschil.top();
		sum = auxmin + auxmax;
		if(sum>X){
			gondola++;
			deschil.pop();
			N--;
			}
		else{
			gondola++;
			deschil.pop();
			aschil.pop();
			N -= 2;
		}
	}
	cout<<gondola;
	return 0;
}