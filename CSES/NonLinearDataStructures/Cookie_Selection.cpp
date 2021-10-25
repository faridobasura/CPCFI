#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int> cookies;
	string input;
	vector<int>::iterator it;
	int c;

	while(getline(cin,input)){
		if(input == "#"){
			if(cookies.size()%2 == 0){
				c = ((cookies.size())/2);
				cout<<cookies[c]<<endl;
				it = (cookies.begin()+c);
				cookies.erase(it);
			}
			else{
				c = ((cookies.size())/2);
				it = (cookies.begin()+c);
				cout<<cookies[c]<<endl;
				cookies.erase(it);
			}
		}
		else{
			cookies.push_back(stoi(input));
		}
	}
	return 0;
}