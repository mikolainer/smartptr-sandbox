#include "pch.h"
#include "DataPointer.h"
#include "Data.h"
#include "iostream"
DataPointer::DataPointer(Data * data)
	: m_data(data)
{
	std::cout << "Lock " << m_data->str().data() << std::endl;
}

DataPointer::~DataPointer()
{
	std::cout << "Unlock " << m_data->str().data() << std::endl;
}

Data * DataPointer::data()
{
	return m_data;
}
