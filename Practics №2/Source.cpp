#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Задача 2
	std::cout << "Задача 2. \nВведите число -> ";
	std::cin >> n;
	if (n > 0) {
		std::cout << "Введите второе число -> ";
		std::cin >> m;
		std::cout << n * m << "\n\n";
	}
	else
		std::cout << pow(n, 2) << "\n\n";

	//Задача 3.
	std::cout << "Задача 3.\nВведите число -> ";
	std::cin >> n;
	std::cout << (n % 4 == 0 && n % 3 != 0 ? "FALSE" : "TRUE") << "\n\n";

	// Задача 4
	int a, b;
	std::cout << "Задача 4. \nВвеедите четыре числа - > ";
	std::cin >> n >> m >> a >> b;

	if (n < m && m < a && a < b)

		std::cout << m << a << b;

	else

		if (n > m && m < a && a < b)
			std::cout << a << ' ' << b;
		else
			if (n > m && m < a && a > b)
				std::cout << a;
			else
				if (n > m && m > a && a < b)
					std::cout << b;
				else
					if (n < m && m < a && a > b)
						std::cout << m << ' ' << a;
					else
						if (n < m && m > a && a < b)
							std::cout << m << ' ' << b;
						else
							std::cout << "Нет числа, которое больше предыдущего!" << "\n\n";


	//Задача 5
	std::cout << "Задача 5. \nВведите 4-х значное число -> ";
	std::cin >> n;
	short n1, n2, n3, n4;
	 n1 = n / 1000;		
	 n2 = n / 100 % 10;
	 n3 = n / 10 % 10;
	 n4 = n % 10;
	 if (n < 1000 || n > 9999)
		 std::cout << "Ошибка ввода.\n\n";
	 else
		 if (n1 == 2 || n1 == 5 || n1 == 7 && n2 == 2 || n2 == 5 || n2 == 7 &&
			 n3 == 2 || n3 == 5 || n3 == 7 && n4 == 2 || n4 == 5 || n4 == 7)
			 std::cout << "FALSE" << "\n\n";
		 else
			 std::cout << "TRUE" << "\n\n";
	
	

	// Задача 6
	std::cout << "Задача 6. \nВведите текущее время в часах -> ";
	std::cin >> n;
	switch (n) {
	case 7:  std::cout << "1) Подъем и завтрак. 2) Выезд на работу. 3) Начало работы. 4) Обеденный перерыв. 5) Конец рабоченго дня. 6) Прибытие домой. 7) Ужин. 8) Отдых. 9) Сон. \n\n"; break;
	case 8:  std::cout << "1) Выезд на работу. 2) Начало работы. 3) Обеденный перерыв. 4) Конец рабоченго дня. 5) Прибытие домой. 6) Ужин. 7) Отдых. 8) Сон.\n\n";	  break;
	case 9: std::cout << "1) Начало работы. 2) Обеденный перерыв. 3) Конец рабоченго дня. 4) Прибытие домой. 5) Ужин. 6) Отдых. 7) Сон.\n\n";	  break;
	case 13:  std::cout << "1) Обеденный перерыв. 2) Конец рабоченго дня. 3) Прибытие домой. 4) Ужин. 5) Отдых. 6) Сон.\n\n";	  break;
	case 17:  std::cout << "1) Конец рабоченго дня. 2) Прибытие домой. 3) Ужин. 4) Отдых. 5) Сон.\n\n"; break;
	case 18:  std::cout << "1) Прибытие домой. 2) Ужин. 3) Отдых. 4) Сон.\n\n";	  break;
	case 19: std::cout << "1)  Ужин. 2) Отдых. 3) Сон.\n\n";	  break;
	case 20:  std::cout << "1) Отдых. 2) Сон.\n\n";	  break;
	case 22:  std::cout << "Сон. \n\n";	  break;

	default:  std::cout << "В это время вы спите.\n\n";
	}

	return 0;
}