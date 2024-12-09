#include "pch.h"
#include <chrono>
#include <thread>
#include "Data.h"

Data::Data(std::string str)
	: m_text(str)
{
	std::cout << "Create data " << m_text.data() << std::endl;
}

Data::~Data()
{
	std::cout << "Delete data " << m_text.data() << std::endl;
}

DataPointer Data::lock_data()
{
	return DataPointer(this);
}

void Data::do_something()
{
	std::cout << m_text.data() << " start to do something" << std::endl;
	std::chrono::milliseconds timespan(1000);
	std::this_thread::sleep_for(timespan);
	std::cout << m_text.data() << " finish to do something" << std::endl;
}

const std::string & Data::str()
{
	return m_text;
}
