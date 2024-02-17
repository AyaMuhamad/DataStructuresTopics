#pragma once
class StackArr
{
	char* arr;
	int elements;
	int capacity;
public:
	StackArr(void);
	int Length();
	void Push(char val);
	void Pop();
	char Top();
	bool empty();
	void Expand();
	~StackArr(void);
};

