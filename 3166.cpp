#include <iostream>
using namespace std;
int main(){
	long long a;
	while(1) {
		cin >> a;
		if(!(a<0||a>100)){  
			cout << "�ɼ���" << a;
			return 0;
		}
	}	
}
