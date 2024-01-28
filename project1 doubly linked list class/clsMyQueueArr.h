#pragma once
#include "clsDynamicArray.h"
using namespace std;



template <class T>
class clsMyQueueArr
{
protected: 
	clsDynamicArray <T> _MyList;

public:
	void push(T value)
	{
		_MyList.InsertAtEnd(value);
	}

	T front()
	{
		return _MyList.GetItem(0);
	}
	 
	T back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	void pop()
	{
		_MyList.DeleteFirstItem();
	}

	void UpdateItem(int index, T value)
	{
		_MyList.SetItem(index, value);
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	void PrintList()
	{
		_MyList.PrintList();
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	int Size()
	{
		return _MyList.Size();
	}

	T GetItem(int index)
	{
		return _MyList.GetItem(index);
	}

	void InsertAfter(int index, T value)
	{
		_MyList.InsertAfter(index, value);
	}

	void InsertAtBeginning(T value)
	{
		_MyList.InsertAtBeginning(value);
	}

	void InsertAtEnd(T value)
	{
		_MyList.InsertAtEnd(value);
	}

	void Clear()
	{
		_MyList.Clear();
	}
};
/*
template <class T>
class clsMyQueueArr : public clsDynamicArray <T>
{
public:
	void push(T value)
	{
		clsDynamicArray <T> ::InsertAtEnd(value);
	}

	T front()
	{
		return clsDynamicArray <T> :: GetItem(0);
	}

	T back()
	{
		return clsDynamicArray <T> :: GetItem(clsDynamicArray <T> ::Size() - 1);
	}

	void pop()
	{
		clsDynamicArray <T> ::DeleteFirstItem();
	}

	void UpdateItem(int index, T value)
	{
		clsDynamicArray <T> ::SetItem(index, value);
	}
};
*/
