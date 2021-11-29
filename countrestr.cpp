#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string dna, restr;
	cout << "Insert starting DNA fragment"<<endl;
	cin>>dna;
	cout << "Insert DNA fragment, which is supposed to cut by Restriction enzyme "<<endl;
	cin>>restr;
	int num = -1;
	for (int i = 0; i < dna.size(); i++){
		num = restr.find(dna[i], num + 1);
	}
			if (num<0){
				cout<< "Restriction enzyme doesnt cut that dna"<<endl;
			}else{
				cout<<"Number of cuts is "<<num<<endl;
	}
	return 0;
}

