#include "StackArr.h"
#include <assert.h>

StackArr::StackArr(void)
{
	capacity=10;
	elements=0;
	arr=new char[capacity];
}

int StackArr::Length()
{
	return elements;
}

void StackArr::Push(char val)
{
	if(elements==capacity)
		Expand();
	arr[elements]=val;
	elements++;
}

void StackArr::Pop()
{
	assert(!empty());
	elements--;
}

char StackArr::Top()
{
	assert(!empty());
	return arr[elements-1];
}

bool StackArr::empty()
{
	return (elements==0);
}

void StackArr::Expand()
{
	capacity+=5;
	char* tmp=new char[capacity];
	for(int i=0;i<elements;i++)
		tmp[i]=arr[i];
	delete[] arr;
	arr=tmp;
}

StackArr::~StackArr(void)
{
	delete[] arr;
}
