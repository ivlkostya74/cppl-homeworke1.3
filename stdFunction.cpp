// stdFunction.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <windows.h>
#include <variant>
#include <algorithm>
#include <functional>
#include <iomanip>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	constexpr auto pi = 3.1415926;

	std::vector<int>angles = { 30,60,90 };
	std::cout << std::fixed << std::setprecision(6);
	
	std::cout << "[Входные данные]: ";
	for (const auto& angle : angles)
	{
		std::cout << angle << " * " << pi << " / 180, ";
	}
	std::cout << "// перевод из градусов в радианы\n";
	std::vector<std::function<void(int)>> functions;
	auto sin = [](int angle)
	{
		std::cout << "sin: " << std::sin(angle * pi / 180) << " ";
	};
	auto cos = [](int angle)
	{
		std::cout << "sin: " << std::cos(angle * pi / 180) << " ";
	};
	functions.push_back(sin);
	functions.push_back(cos);

	std::cout << "[Выходные данные]: " << std::endl;

	std::cout << std::defaultfloat;
	for (const auto& angle : angles)
	{
		std::cout << angle * pi / 180 << ": ";
	
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
