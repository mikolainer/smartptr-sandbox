#pragma once
class Data;

class DataPointer {
	Data* m_data;

public:
	DataPointer(Data* data);
	~DataPointer();

	Data* data();
};