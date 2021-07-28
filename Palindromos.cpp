#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <ctype.h>

using namespace std;

bool verif (string x){
	bool k;
	string y;
		x.erase(remove(x.begin(), x.end(), ' '), x.end());
		transform(x.begin(), x.end(), x.begin(), ::tolower);
		
	for(int i=x.length()-1; i>=0; i--){
		y += x [i];
	}
		if (y == x) {
			cout << "\n A palavra e um palindromo\n\n";
			k = true;
		}
		
		else {
			cout << "\n A palavra nao e um palindromo\n\n";
			k = false;
		}
	
	return k;
}

int main (){
	
	string x;
		
	cout << "Digite uma palavra: ";
	
	getline(cin, x);
	
	cout << verif (x);
	
	return 0;
}
