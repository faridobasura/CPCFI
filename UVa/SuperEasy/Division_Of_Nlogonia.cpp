#include<iostream>

using namespace std;

int main(){
	int K, N, M, i, X, Y;
	scanf("%d", &K);
	while(K != 0){
		scanf("%d %d", &N, &M);
		for(i=0; i<K; i++){
			scanf("%d %d", &X, &Y);
			if((X-N)==0 || (Y-M)==0){
				printf("divisa\n");
			}
			else if((X-N)>0){
				if((Y-M)>0){
					printf("NE\n");
				}
				else{
					printf("SE\n");
				}
			}
			else{
				if((Y-M)>0){
					printf("NO\n");
				}
				else{
					printf("SO\n");
				}
			}
		}
		scanf("%d", &K);
	}
	return 0;
}
