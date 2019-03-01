#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
	ifstream source("score1.txt");
	string line;
	int i;

	while(getline(source,line)){
		cout << line << "\n";
		i++;
	}
	cout << i;
	

	return 0;
}

