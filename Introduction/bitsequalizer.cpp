#include<iostream>

using namespace std;

int main(){
	string S, T;
	int cases, i, conT, conS, moves, conC;
	bool band = true;
	cin>>cases;
	i = 0;
	while(cases != 0){
		conT = 0;
		conS = 0;
		conC = 0;
		moves = 0;
		i++;
		cin>>S;
		cin>>T;
		for(int j = 0; j<T.length(); j++){
			if(T[j] == '0'){
				conT++;
			}
			if(S[j] == '0'){
				conS++;
			}
			if(S[j] == '?'){
				conC++;
				S[j] = T[j];
				moves++;
			}
		}
		for(int j = 0; j<T.length(); j++){
			if(S[j] != T[j]){
				if(band){
					moves++;
					band = false;
				}
				else{
					band = true;
				}
			}
		}
		cases--;
		if(conT > (conS+conC)){
			cout<<"Case "<<i<<": "<<"-1"<<endl;
		}
		else{
			cout<<"Case "<<i<<": "<<moves<<endl;
		}
	}
	return 0;
}