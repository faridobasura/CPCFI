#include<iostream>

using namespace std;

int main(){
	int i;
	bool band;
	char str;
	band = true;
	while(scanf("%c", &str) != 1){
			if(str == '"' && band == true){
				printf("``");
				band = !band;
			}
			else if(str == '"' && band == false){
				printf("''");
				band = !band;
			}
			else{
				printf("%c", str);
			}
	}
	return 0;
}
