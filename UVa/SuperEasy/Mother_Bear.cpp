#include<iostream>
#include<cctype>

using namespace std;

int main(){
	string input, comp, finish, reversed;
	int i, val;
	while(1){
		getline(cin,input);
		if(input.compare("DONE") == 0){
			break;
		}
		for(i=0; i<input.length(); i++){
			char x;
			x = input[i];
			if( (x != '.') && (x != ',') && (x != ' ') && (x != '!') && (x !='?')){
				comp += tolower(x);
			}
		}
		for(i=comp.length()-1; i>=0; i--){
			reversed += comp[i];
		}
		val = comp.compare(reversed);
		if(val == 0){
			cout<<"You won't be eaten!"<<endl;
		}
		else{
			cout<<"Uh oh.."<<endl;
		}
		comp = "";
		reversed= "";
	}
	return 0;
}