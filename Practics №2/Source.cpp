#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//������ 2
	std::cout << "������ 2. \n������� ����� -> ";
	std::cin >> n;
	if (n > 0) {
		std::cout << "������� ������ ����� -> ";
		std::cin >> m;
		std::cout << n * m << "\n\n";
	}
	else
		std::cout << pow(n, 2) << "\n\n";

	//������ 3.
	std::cout << "������ 3.\n������� ����� -> ";
	std::cin >> n;
	std::cout << (n % 4 == 0 && n % 3 != 0 ? "FALSE" : "TRUE") << "\n\n";

	// ������ 4
	int a, b;
	std::cout << "������ 4. \n�������� ������ ����� - > ";
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
							std::cout << "��� �����, ������� ������ �����������!" << "\n\n";


	//������ 5
	std::cout << "������ 5. \n������� 4-� ������� ����� -> ";
	std::cin >> n;
	short n1, n2, n3, n4;
	 n1 = n / 1000;		
	 n2 = n / 100 % 10;
	 n3 = n / 10 % 10;
	 n4 = n % 10;
	 if (n < 1000 || n > 9999)
		 std::cout << "������ �����.\n\n";
	 else
		 if (n1 == 2 || n1 == 5 || n1 == 7 && n2 == 2 || n2 == 5 || n2 == 7 &&
			 n3 == 2 || n3 == 5 || n3 == 7 && n4 == 2 || n4 == 5 || n4 == 7)
			 std::cout << "FALSE" << "\n\n";
		 else
			 std::cout << "TRUE" << "\n\n";
	
	

	// ������ 6
	std::cout << "������ 6. \n������� ������� ����� � ����� -> ";
	std::cin >> n;
	switch (n) {
	case 7:  std::cout << "1) ������ � �������. 2) ����� �� ������. 3) ������ ������. 4) ��������� �������. 5) ����� ��������� ���. 6) �������� �����. 7) ����. 8) �����. 9) ���. \n\n"; break;
	case 8:  std::cout << "1) ����� �� ������. 2) ������ ������. 3) ��������� �������. 4) ����� ��������� ���. 5) �������� �����. 6) ����. 7) �����. 8) ���.\n\n";	  break;
	case 9: std::cout << "1) ������ ������. 2) ��������� �������. 3) ����� ��������� ���. 4) �������� �����. 5) ����. 6) �����. 7) ���.\n\n";	  break;
	case 13:  std::cout << "1) ��������� �������. 2) ����� ��������� ���. 3) �������� �����. 4) ����. 5) �����. 6) ���.\n\n";	  break;
	case 17:  std::cout << "1) ����� ��������� ���. 2) �������� �����. 3) ����. 4) �����. 5) ���.\n\n"; break;
	case 18:  std::cout << "1) �������� �����. 2) ����. 3) �����. 4) ���.\n\n";	  break;
	case 19: std::cout << "1)  ����. 2) �����. 3) ���.\n\n";	  break;
	case 20:  std::cout << "1) �����. 2) ���.\n\n";	  break;
	case 22:  std::cout << "���. \n\n";	  break;

	default:  std::cout << "� ��� ����� �� �����.\n\n";
	}

	return 0;
}