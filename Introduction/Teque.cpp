#include<iostream>
#include<list>
using namespace std;

int main(){
	int op, numb;
	string instruction;
	list<int> teque;
	list<int>::iterator con;

	cin>>op;
	while(op != 0){
		con = (teque.size()/2);
		scanf("%s %d", &instruction, &numb);
		if(!instruction.compare("push_back ")){
			teque.push_back(numb);
		}
		else if(!instruction.compare("push_front ")){
			teque.push_front(numb);
		}
		else if(!instruction.compare("push_middle ")){
			teque.insert(con, numb);
		}
		else{
			cout<<teque.get(numb);
		}
		op--;
	}
	return 0;
}