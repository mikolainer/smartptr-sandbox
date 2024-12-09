#include "pch.h"
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
	std::cout << m_text.data() << " does something" << std::endl;
}

const std::string & Data::str()
{
	return m_text;
}
