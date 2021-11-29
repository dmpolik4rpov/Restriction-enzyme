#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string dna, restr;
	cout << "Введите начальный фрагмент ДНК"<<endl;
	cin>>dna;
	cout << "Введите фрагмент ДНК, по которому происходит расщепление рестриктазой"<<endl;
	cin>>restr;
	int num = -1;
	for (int i = 0; i < dna.size(); i++){
		num = restr.find(dna[i], num + 1);
	}
			if (num<0){
				cout<< "Рестриктаза не рассекает данный ДНК"<<endl;
			}else{
				cout<<"Число рассечений равно "<<num<<endl;
	}
	return 0;
}

