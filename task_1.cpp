#include <iostream>
using namespace std;
int main(){
	int a[1000];
	for (int i=0, i<5, i++){
		for (int j=0, j<200, j++){
			a[200*i+j]=j;
		}
	}
	return a;
}
