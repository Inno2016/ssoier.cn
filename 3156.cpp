#include <iostream>
using namespace std;
int main(){
	int i=0;
	cin >> i;
	for(int j=1; j<i; j++){
		if(j%3==0){
			cout << j << endl;
		}
	}
}
