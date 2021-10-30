#include<iostream>
#include<queue>

using namespace std;

int main(){
	priority_queue<int, vector<int>, greater<int>> schedule;
	pair<int,int> aux;
	int movies;

	int n;
	cin>>n;
	movies = 1;
	for(int i =0; i<n; i++){
		cin>>aux;
		schedule.push(aux);
	}
	for(int i =0; i<n-1; i++){
		aux = schedule.top();
		schedule.pop();
		if((aux.second())<schedule.top().second()){
			movies++;
		}
	}
	cout<<movies;
	return 0;
}