#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;






int main()
{
	
	clsDblLinkedList <int> MyDblLinkedList;
	
	MyDblLinkedList.InsertAtBegining(5);
	MyDblLinkedList.InsertAtBegining(4);
	MyDblLinkedList.InsertAtBegining(3);
	MyDblLinkedList.InsertAtBegining(2);
	MyDblLinkedList.InsertAtBegining(1);

	MyDblLinkedList.DeleteFirstNode();
	MyDblLinkedList.DeleteLastNode();
	//cout << "Linked List Content:\n";
	//MyDblLinkedList.printNode();

	cout << "\nThe Number of items in the inked List= "<< MyDblLinkedList.Size();





	/*
	clsDblLinkedList<int>::Node* N1 = MyDblLinkedList.FindeNode(2);
	
	if (N1 != NULL)
		cout << "\n\nNode with value [" << N1->value << "]: is found :-)\n";
	else
		cout << "\nNode is not found :-( \n";
	
	MyDblLinkedList.InsertAfter(N1, 500);
	cout << "\n\nAfter Inserting 500 after [" << N1->value << "]: \n";
	MyDblLinkedList.printNode();
	
	cout << "\n\nAfter Inserting 700 at end:\n";
	MyDblLinkedList.InsertAtEnd(700);
	MyDblLinkedList.printNode();

	clsDblLinkedList<int>::Node* N2 = MyDblLinkedList.FindeNode(4);

	cout << "\n\nAfter Deleting Node 4:\n";
	MyDblLinkedList.DeleteNode(N2);
	MyDblLinkedList.printNode();

	cout << "\n\nAfter Deleting FirstNode:\n";
	MyDblLinkedList.DeleteFirstNode();
	MyDblLinkedList.printNode();

	cout << "\n\nAfter Deleting LastNode:\n";
	MyDblLinkedList.DeleteLastNode();
	MyDblLinkedList.printNode();
	*/

	



	cout << "\n\n";
	system("pause>0");
	return 0;

}


/*
//template <typename T> T myMax(T num1, T num2)
//{
//	return num1 > nu m2 ? num1 : num2;
//}

//template <typename T> T myMax(T num1, T num2)
//{
//	return num1 + num2;
//}
//cout<< myMax<int>(5, 7);

/*
template <class T>
class Calculator
{
private:
	T number1, number2;

public:
	Calculator(T n1, T n2)
	{
		number1 = n1;
		number2 = n2;
	}

	void PrintResult()
	{
		cout << number1 << " + " << number2 << " = " << Add() << endl;
		cout << number1 << " - " << number2 << " = " << Subtract() << endl;
		cout << number1 << " * " << number2 << " = " << Multiply() << endl;
		cout << number1 << " / " << number2 << " = " << Divide() << endl;
	}

	T Add()
	{
		return number1 + number2;
	}

	T Subtract()
	{
		return number1 - number2;
	}

	T Multiply()
	{
		return number1 * number2;;
	}

	T Divide()
	{
		return number1 / number2;
	}

};
	/*Calculator <int> intCalculator(1, 2);

	intCalculator.PrintResult();
	*/
/*
template <class T>
class Calculator
{
private:
	T _Number1, _Number2;

public:
	Calculator(T n1, T n2)
	{
		_Number1 = n1;
		_Number2 = n2;
	}

	T Add()
	{
		return _Number1 + _Number2;
	}

	T Subtract()
	{
		return _Number1 - _Number2;
	}

	T Multiply()
	{
		return _Number1 * _Number2;
	}

	T Divide()
	{
		return _Number1 / _Number2;
	}

	void PrintResult()
	{
		cout << _Number1 << " + " << _Number2 <<" = "<< Add() << "\n";
		cout << _Number1 << " - " << _Number2 <<" = "<< Subtract() << "\n";
		cout << _Number1 << " * " << _Number2 <<" = "<< Multiply() << "\n";
		cout << _Number1 << " / " << _Number2 <<" = "<< Divide() << "\n";
	}
};
*/
/*Calculator <int> intCalc(5, 3);
	 
	cout <<"\n"<< intCalc.Add() << "\n";
	cout <<"\n"<< intCalc.Subtract() << "\n";
	cout <<"\n"<< intCalc.Multiply() << "\n";
	cout <<"\n"<< intCalc.Divide() << "\n";

	intCalc.PrintResult();*/
/*

template<class T>
class Calculator
{
private:
	T number1, number2;
public:

	Calculator(T n1, T n2)
	{
		number1 = n1;
		number2 = n2;
	}




	Calculator <int> intCalc(5, 3);

};

*/
/*
template <typename T> T Add(T n1, T n2)
{
	return n1 + n2;
}
	cout<< Add <int> (3, 5);
*/