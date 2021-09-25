#include<iostream>
#include<list>


using namespace std;

int main(){
	list<char> keyboard;
	string input;
	list<char>::iterator con;
	char in;
	while(getline(cin, input)){
		con = keyboard.begin();
		for(int i = 0; i<input.length(); i++){
			in = input[i];
			if(in == '['){
				con = keyboard.begin();
			}
			else if(in == ']'){
				con = keyboard.end();
			}
			else{
				keyboard.insert(con, in);
			}
		}
		list <char> :: iterator it;
	    for(it = keyboard.begin(); it != keyboard.end(); ++it){
	        cout << *it;
	    }
	    cout << '\n';
		keyboard.list::clear();
	}
	return 0;
}