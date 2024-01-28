#pragma once
#include <iostream>
#include "clsDynamicArray.h"
#include "clsDblLinkedList.h"
using namespace std;




template <class T>
class clsDynamicArray
{
protected:
	int _Size;
	T* _TempArray;

public:

	T* OriginalArray;

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;

		OriginalArray = new T [_Size];
	}

	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int index, T value)
	{
		if (index >= _Size || index < 0)
			return false;
	
		OriginalArray[index] = value;
			return true;
	}

	void PrintList()
	{
		if (_Size == 0)return;

		cout << "\n";
		for (int i = 0; i < _Size; i++)
			cout << OriginalArray[i]<<" ";
		cout << "\n";
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return _Size == 0 ? true : false;
	}

	T GetItem(int index)
	{
		return OriginalArray[index];
	}
	
	void Reverse()
	{
		_TempArray = new T [_Size];

		for (int i = 0; i < _Size; i++)
			_TempArray[i] = OriginalArray[_Size - 1 - i];
		
		delete[]OriginalArray;
		OriginalArray = _TempArray;
	}
	
	void Clear()
	{
		_Size = 0;
	
		_TempArray = new T[0];
		
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}
	
	void ReSize(int newSize)
	{
		if (newSize < 0)
			newSize = 0;

		_TempArray = new T[newSize];

		if (newSize < _Size)
			_Size = newSize;

		for (int i = 0; i < _Size; i++)
			_TempArray[i] = OriginalArray[i];

		_Size = newSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}
	
	bool DeleteItemAt(int index)
	{
		if (index >= _Size || index < 0)
			return false ;

		_Size--;
		_TempArray = new T [_Size];

		for (int i = 0; i < index; i++)// 10 20 30 40 50
			_TempArray[i] = OriginalArray[i];

		for (int i = index+1; i <= _Size; i++)
			_TempArray[i-1] = OriginalArray[i];

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;
		/*
		int nd_Size = _Size-index-1;

		T* stHalf = new T[index];
		T* ndHalf = new T[nd_Size];


		for (int i =0 ; i < index; i++)
			stHalf[i] = OriginalArray[i];

		for (int i = 0; i < nd_Size; i++)
			ndHalf[i] = OriginalArray[i+ index + 1];

		delete[] OriginalArray;
		_Size = nd_Size + index;
		OriginalArray = new T[_Size];

		for (int i = 0; i < index; i++)
			OriginalArray[i] = stHalf[i];
		
		for (int i = 0; i < nd_Size; i++)
			OriginalArray[index+i] = ndHalf[i];
		return true;
		*/
	}
	
	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}
	
	void DeleteLastItem()
	{
		DeleteItemAt(_Size-1);
	}

	int Find(T value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == value)
				return i;
		}
		return -1;
	}

	bool DeleteItem(T value)
	{
		int index = Find(value);
		
		if (index == -1)
			return false;

		DeleteItemAt(index);
		return true;
	}

	bool InsertAt(int index, T value)
	{
		if (index > _Size || index < 0) return false;

		_Size++;
		_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)// 10 20 30 40 50
			_TempArray[i] = OriginalArray[i];// 10 20 700 30 40 50

		_TempArray[index] = value;
		
		for (int i = index+1; i < _Size; i++)
			_TempArray[i] = OriginalArray[i-1];

		delete[] OriginalArray;
		OriginalArray = _TempArray;

		return true;
	}

	void InsertAtBeginning(T value)
	{
		InsertAt(0, value);
	}

	void InsertAtEnd(T value)
	{
		InsertAt(_Size, value);
	}

	bool InsertBefore(int index, T value)// 10 20 30 40 50
	{
		if(index <1)
			return InsertAt(0, value);
		else
			InsertAt(index-1, value);
	}
	
	bool InsertAfter(int index, T value)// 10 20 30 40 50
	{
		if(index >=_Size)
			return InsertAt(_Size-1, value);
		else
			InsertAt(index+1, value);
	}
};

