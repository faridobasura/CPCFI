#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n,m,aux, k, v;
	vector<vector<int>> list;
	while(scanf("%d %d", &n, &m) != EOF){
		for(int i = 1; i<=1000000; i++){
			vector<int> v;
			list.push_back(v);
		}
		for(int i = 1; i<=n; i++){
			cin>>aux;
			list[aux].push_back(i);
		}
		for(int i = 0; i<m; i++){
			cin>>k>>v;
			if(list[v].size() > (k-1)){
				cout<<list[v][k-1]<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
	}
	return 0;
}