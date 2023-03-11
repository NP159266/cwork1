#include "res.h"
#include "res.c"
#include <fsrteam>
int main(){
	string line;
	ifstream inputs("/c/Users/Nik/povalyaev/inputs.txt", ios::in);
	reults.open("/c/Users/Nik/povalyaev/results.txt", ios::app);
	if (inputs.isopen()){
		while (getline(inputs, line)){
			c=placheck(line);

		}
	}
	inputs.close() 
	results.close();

