#pragma once
#include <iostream>
#include <stack>
using namespace std;





class clsMystring
{
private:
	stack <string> MyStackString;
	stack <string> History;
	string _Value;
	string _lastValue;

public:

	void SetValue(string value)
	{
		_Value = value;
		MyStackString.push(Value);
	}
	string getValue()
	{
		return _Value;
	}
	__declspec(property(get = getValue, put = SetValue)) string Value;

	void Print()
	{
		stack <string> stackHistory = MyStackString;

		while (!stackHistory.empty())
		{
			cout << stackHistory.top() << " ";
			stackHistory.pop();
		}
	}
	// [10 20 30]  []
	void Undo()//[10]  [30 20]
	{
		_lastValue = MyStackString.top();

		MyStackString.pop();
		History.push(_lastValue);
	}

	void Redo()// [10]    [30 20]
	{
		_lastValue = History.top();

		History.pop();
		MyStackString.push(_lastValue);
	}



};

/*
#pragma once
#include <iostream>
#include "clsDynamicArray.h"
using namespace std;





class clsMystring
{
protected:
	clsDynamicArray <string> valueArray;
	clsDynamicArray <string> history;
	string _Value;
	string _lastValue;

public:
	clsMystring(string value="")
	{
		_Value = value;
	}

	void SetValue(string value)
	{
		_Value = value;
		valueArray.InsertAtEnd(Value);
	}

	string getValue()
	{
		return _Value;
	}
	
	__declspec(property(get = getValue, put = SetValue)) string Value;

	void Print()
	{
		valueArray.PrintList();
	}
	// [10 20 30]  []
	void Undo()//[10]  [30 20]
	{
		_lastValue = valueArray.GetItem(valueArray.Size()-1);

		valueArray.DeleteLastItem();
		history.InsertAtEnd(_lastValue);
	}

	void Redo()// [10]    [30 20]
	{
		_lastValue = history.GetItem(history.Size()-1);

		valueArray.InsertAtEnd(_lastValue);
		history.DeleteLastItem();
	}


};
*/
