#include <iostream>

int main() {
	std::cout << "数字を入力"<< std::endl;
	int a;
	std::cin >> a;
	std::cout << a<< std::endl;
	return 0;
}

int add(int n, int m) {
	return n + m;
}