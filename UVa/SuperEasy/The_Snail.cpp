#include<iostream>

using namespace std;

int main(){
	int days;
	double H,U,D,F, pos, min;

	scanf("%lf %lf %lf %lf", &H, &U, &D, &F);

	while(H > 0){

		pos = 0; 
		days = 1;
		min = U*(F/100);

		while(1){

			pos += U;
			if(U>0){
				U -= min;
			}
			if(pos > H){
				printf("success on day %d\n", days);
				break;
			}

			pos -= D;
			if(pos < 0){
				printf("failure on day %d\n", days);
				break;
			}
			days++;
		}
		scanf("%lf %lf %lf %lf", &H, &U, &D, &F);
	}
	return 0;
}