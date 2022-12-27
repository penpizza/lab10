#include<iostream>
using namespace std;

void printO(int i ,int j){
	if (i <=0 || j<=0){
		cout << "Invalid input";
	}
	for (int x=0; x<i; x++){
		for (int y=0; y<j; y++){
			cout << 'O';
		}
		cout << endl;
	}
} 

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
