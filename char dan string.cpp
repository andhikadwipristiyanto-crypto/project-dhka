#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int panjangteks;
	char kata [20];
	
	cout << "Masukan Kata = ";
	cin >> kata;
	
	panjangteks = strlen(kata);
	
	cout << "\nPanjang kata " << kata << " adalah = "
		 << panjangteks;
		 
	return 0;
}
	
	