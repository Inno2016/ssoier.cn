#include <iostream>
#include <cstdio> 
using namespace std;
int main(){
	double a,i,sum=0;
	scanf("%lf",&a);
	for(int j=0; j<a; ++j){
		scanf("%lf",&i);
		sum+=i;
	}
	printf("%.0lf %.5lf",sum,sum/a);
}
