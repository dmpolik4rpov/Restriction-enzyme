#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string dna, restr;
	cout << "������� ��������� �������� ���"<<endl;
	cin>>dna;
	cout << "������� �������� ���, �� �������� ���������� ����������� ������������"<<endl;
	cin>>restr;
	int num = -1;
	for (int i = 0; i < dna.size(); i++){
		num = restr.find(dna[i], num + 1);
	}
			if (num<0){
				cout<< "����������� �� ��������� ������ ���"<<endl;
			}else{
				cout<<"����� ���������� ����� "<<num<<endl;
	}
	return 0;
}

