#pragma once
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"




template <class T>
class clsMyStack : public clsMyQueue <T>
{
public:
	void push(T item)
	{
		clsMyQueue<T> ::_MyList.InsertAtBegining(item);
	}

	T top()
	{
		return clsMyQueue<T> ::_MyList.GetItem(0);
	}

	T bottom()
	{
		return clsMyQueue<T> ::_MyList.GetItem(clsMyQueue<T> ::_MyList.Size() - 1);
	}
};

