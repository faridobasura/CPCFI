#include<bits/stdc++.h>
using namespace std;

#define endl 		    '\n'
#define FOR(i, a, b)    for(int i = (a); i < (b); i++)
#define RFOR(i, a, b)   for(int i = (a); i > (b); i--)
#define pint(x)		    printf("%d\n", x);
#define pll(x)		    printf("%lld\n", x);
#define si(x)		    scanf("%d\n", &x);
#define sll(x)		    scanf("%lld\n", &x);
#define all(x)		    x.begin(), x.end()
						
typedef vector<int> vi;
typedef vector<long long> vll;


int main(){
	long long int n, s, d, x, y;

	cin>>n;
	FOR(i, 0, n){
		cin>>s>>d;
		if( (s-d)<0 || (s-d)%2!=0 || (s+d)%2!=0 ){
			cout<<"impossible"<<endl;
		}
		else{
			x = (s+d)/2;
			y = (s-d)/2;
			if(x>y){
				cout<<x<<" "<<y<<endl;
			}
			else if (y>x){
				cout<<y<<" "<<x<<endl;
			}
		}
	}
	return 0;
}