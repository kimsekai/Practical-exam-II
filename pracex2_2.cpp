#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ifstream source("score1.txt");
	string line;
	int i = 0;
	float x,a[20];
	while(getline(source,line)){
		a[i] = 1*atof(line.c_str());
		i++;
	}
	sort(a,i);
	ofstream dest("result.txt");
	int num = 1;
	cout << num  << " : " << a[0] << "\n";
	for(int k = 1; k < i;k++){
		if(a[k] == a[k-1]){
			cout << num << " : " << a[k] <<"\n";
		}else{
			cout << num + 1 << " : " << a[k] <<"\n";
		}
		num++;
	}
	dest.close();
	
	return 0;
}


