#include <cstdio> 
int main(){
	double a,i,sum=0;
	scanf("%lf",&a);
	for(int j=0; j<a; ++j){
		scanf("%lf",&i);
		sum+=i;
	}
	sum/=a;
	printf("%.2lf",sum);
}
