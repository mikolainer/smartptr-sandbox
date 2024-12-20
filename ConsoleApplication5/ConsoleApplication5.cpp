// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include "Data.h"
#include "DataPointer.h"

void foo(Data* raw_data_pointer)
{
	raw_data_pointer->do_something();
}

void foo(DataPointer* smart_lock_pointer)
{
	smart_lock_pointer->data()->do_something();
}

int main()
{
	Data cat("cat");
	Data dog("dog");
	Data snake("snake");
	Data spider("spider");
	std::cout << std::endl;

	foo(cat.lock_data().data());
	std::cout << std::endl;

	foo(&dog.lock_data());
	std::cout << std::endl;

	{
		DataPointer ptr = snake.lock_data();
		foo(&ptr);
	}
	std::cout << std::endl;

	spider.lock_data().data()->do_something();

	std::cout << std::endl;
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
