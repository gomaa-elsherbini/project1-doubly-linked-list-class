#pragma once
#include "clsDynamicArray.h"
#include "clsMyQueueArr.h"
using namespace std;




template <class T>
class clsMyStackArr : public clsMyQueueArr <T>
{
public:

	void push(T value)
	{
		clsMyQueueArr <T> ::InsertAtEnd(value);
	}

	void Print()
	{
		clsMyQueueArr <T> ::PrintList();
		cout << "\n";
	}

	T Top()
	{
		return clsMyQueueArr <T> ::GetItem(clsMyQueueArr <T> ::Size()-1);
	}
	
	T Bottom()
	{
		return clsMyQueueArr <T> ::GetItem(0);
	}

	void pop()
	{
		clsMyQueueArr <T> ::_MyList.DeleteLastItem();
	}


};

