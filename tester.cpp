#include <iostream>
#include <numeric>
using namespace std;


int main(){
	int a=0;
	for (int i = 0; i < 20; i++){
		if (i < 10) a++;
		else a--;
	}
	cout << a << endl;
	
	return 0;
}