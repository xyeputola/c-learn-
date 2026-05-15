#include <iostream>

int main() {
	setlocale(LC_ALL, "Ru");
	
	double a, b;
	int c;
	std::cout << "Калькулятор\n\n\n Первое значение: ";
	std::cin >> a;
	std::cout << "Второе значение: ";
	std::cin >> b;
	std::cout << "Ваше дейсвтие\n(+ - * /): ";
	std::cin >> c;
	
	if (b == 0 && c == 4) {
		std::cout << "Нельзя!";
	}
	switch (c) {
	case 1:
		std::cout << a + b;
		break;
	case 2:
		std::cout << a - b;
		break;
	case 3:
		std::cout << a * b;
		break;
	case 4:
		std::cout << a / b;
		break;
	default:
		std::cout << "Неверное действие!";
	}
	
	return 0;
}