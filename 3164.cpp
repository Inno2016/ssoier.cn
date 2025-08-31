#include <iostream>
using namespace std;
int main(){
	int i=0;
	while(i<20){
		i++;
		if(i%2==0&&i%3==0){
			cout << i << ' ' << "叮叮当当\n"; 
		}else if(i%2==0){
			cout << i << ' ' << "叮叮\n";
		}else if(i%3==0){
			cout << i << ' ' << "当当\n";
		}else{
			cout << i << ' ';
		}
	}
}
