#include <iostream>
#include <string>

int main() {
	std::string dna, restr;
	std::cout << "Insert starting DNA fragment" << std::endl;
	std::cin >> dna;
	std::cout << "Insert DNA fragment, which is supposed to be cutted by Restriction enzyme " << std::endl;
	std::cin >> restr;
	int num = -1;
	for (int i = 0; i < dna.size(); i++) {
		num = restr.find(dna[i], num + 1);
	}
	if (num < 0) {
		std::cout << "Restriction enzyme doesn't cut that dna" << std::endl;
	}
	else {
		std::cout << "Number of cuts is " << num << std::endl;
	}
	return 0;
}


