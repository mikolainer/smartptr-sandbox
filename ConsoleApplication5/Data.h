#pragma once
#include <iostream>
#include "DataPointer.h"

class Data {
	const std::string m_text;

public:
	Data(std::string str);
	~Data();

	DataPointer lock_data();
	void do_something();
	const std::string& str();
};