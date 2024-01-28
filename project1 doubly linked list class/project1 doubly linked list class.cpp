#include <iostream>
#include "clsMyStack.h"
#include "clsDynamicArray.h"
#include "clsQueueLine.h"
using namespace std;






int main()
{
	clsQueueLine PayBillsQueue("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);

	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();


	cout << "\nPay Bills Queue info: \n";
	PayBillsQueue.PrintInfo();
	
	PayBillsQueue.PrintTicketsLineRTL();
	PayBillsQueue.PrintTicketsLineLTR();
	
	PayBillsQueue.PrintAllTickets();
	
	cout << "\n\n\nAll Tickets info After Serving One Client: ";
	PayBillsQueue.ServeNextClient();
	
	cout << "\n\n\nPay Bills Queue info After Serving One Client: ";
	PayBillsQueue.PrintAllTickets();
	
	cout << "\nPay Bills Queue info: \n";
	PayBillsQueue.PrintInfo();

	cout << "\n\n\nAll Tickets info After Serving One Client: ";
	PayBillsQueue.ServeNextClient();

	cout << "\n\n\nPay Bills Queue info After Serving One Client: ";
	PayBillsQueue.PrintAllTickets();

	cout << "\nPay Bills Queue info: \n";
	PayBillsQueue.PrintInfo();

	cout << "\n\n\nAll Tickets info After Serving One Client: ";
	PayBillsQueue.ServeNextClient();

	cout << "\n\n\nPay Bills Queue info After Serving One Client: ";
	PayBillsQueue.PrintAllTickets();

	cout << "\nPay Bills Queue info: \n";
	PayBillsQueue.PrintInfo();
	
	cout << "\n\n\nAll Tickets info After Serving One Client: ";
	PayBillsQueue.ServeNextClient();

	cout << "\n\n\nPay Bills Queue info After Serving One Client: ";
	PayBillsQueue.PrintAllTickets();

	cout << "\nPay Bills Queue info: \n";
	PayBillsQueue.PrintInfo();

	cout << "\n\n\nAll Tickets info After Serving One Client: ";
	PayBillsQueue.ServeNextClient();

	cout << "\n\n\nPay Bills Queue info After Serving One Client: ";
	PayBillsQueue.PrintAllTickets();

	cout << "\nPay Bills Queue info: \n";
	PayBillsQueue.PrintInfo();



	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	
	cout << "\nSubscrition Queue info: \n";
	SubscriptionsQueue.PrintInfo();
	
	SubscriptionsQueue.PrintTicketsLineRTL();
	SubscriptionsQueue.PrintTicketsLineLTR();
	
	
	SubscriptionsQueue.ServeNextClient();
	
	cout << "\n\n\nSubscriptions Queue After Serving One Client: ";
	SubscriptionsQueue.PrintAllTickets();
	SubscriptionsQueue.PrintInfo();


	cout << "\n\n";
	system("pause>0");

	return 0;

}

	/*
	cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

	clsMystring S1;

	cout << "\nS1= " << S1.Value<<"\n";

	S1.Value = "Mohammad1";
	cout << "\nS1= " << S1.Value<<"\n";

	S1.Value = "Mohammad2";
	cout << "\nS1= " << S1.Value<<"\n";

	S1.Value = "Mohammad3";

	cout << "\nS1= " << S1.Value<<"\n";

	cout << "\nbefore undo: \n";
	S1.Print();


	//cout << "\nafter undo: \n";
	S1.Undo();
	S1.Undo();
	S1.Redo();
	S1.Redo();
	cout << "\nafater undo2: \n";
	S1.Print();
	////
	//S1.Redo();
	//
	//
	//S1.Undo();
	//S1.Undo();
	//S1.Redo();
	//S1.Redo();
	//
	//S1.Undo();
	//S1.Undo();
	//S1.Undo();
	//S1.Redo();
	//S1.Redo();
	//S1.Redo();
	//cout<<"\n\nArray: \n";
	//S1.Print();
	 */
	/*
	clsMyStackArr <int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);


	cout << "\nStack: \n";
	MyStack.Print();

	cout << "\nStack Size: " << MyStack.Size();
	cout << "\nStack Top: " << MyStack.Top();
	cout << "\nStack Bottom: " << MyStack.Bottom();

	cout << "\nStack after pop(): \n";
	MyStack.pop();
	MyStack.Print();
	*/
	/*
	clsMyQueueArr <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "\nQueue: \n";

	MyQueue.PrintList();

	cout << "\n\nQueue Size: " << MyQueue.Size();
	cout << "\n\nQueue front: " << MyQueue.front();
	cout << "\n\nQueue Back: " << MyQueue.back();

	MyQueue.pop();
	cout << "\n\nQueue After pop(): \n";
	MyQueue.PrintList();

	cout << "\n\nItem (2): "<<MyQueue.GetItem(2);

	cout << "\n\nQueue After Revers(): \n";
	MyQueue.Reverse();
	MyQueue.PrintList();

	cout << "\n\nQueue After update item (2) to 600: \n";
	MyQueue.UpdateItem(2, 600);
	MyQueue.PrintList();

	cout << "\n\nQueue After inserting 800 after item (2): \n";
	MyQueue.InsertAfter(2, 800);
	MyQueue.PrintList();

	cout << "\n\nQueue After inserting 1000 at front: \n";
	MyQueue.InsertAtBeginning(1000);
	MyQueue.PrintList();

	cout << "\n\nQueue After inserting 2000 at back: \n";
	MyQueue.InsertAtEnd(2000);
	MyQueue.PrintList();

	cout << "\n\nQueue After Clear(): \n";
	MyQueue.Clear();
	MyQueue.PrintList();
	*/
	/*
	clsDynamicArray <int> MyDaynamicArray(5);

	MyDaynamicArray.SetItem(0, 10);
	MyDaynamicArray.SetItem(1, 20);
	MyDaynamicArray.SetItem(2, 30);
	MyDaynamicArray.SetItem(3, 40);
	MyDaynamicArray.SetItem(4, 50);


	cout << "\nArray Items: \n";
	MyDaynamicArray.PrintList();

	cout << "\nIsEmpty? " << MyDaynamicArray.IsEmpty();
	cout << "\nArray Size: " << MyDaynamicArray.Size();

	cout << "\nItem (2): " << MyDaynamicArray.GetItem(2);
	
	cout << "\nArray Items After Reverse: \n";
	MyDaynamicArray.Reverse();
	MyDaynamicArray.PrintList();

	cout << "\nArray Items After deleting item (2): \n";
	MyDaynamicArray.DeleteFirstItem();
	MyDaynamicArray.DeleteLastItem();

	MyDaynamicArray.InsertAt(2, 500);
	MyDaynamicArray.InsertAfter(2, 600);//10 20 30 40 50
	MyDaynamicArray.PrintList();
	cout << "\nArray Size: " << MyDaynamicArray.Size();
	clsMyStack <int> Mystack;

	Mystack.push(10);
	Mystack.push(20);
	Mystack.push(30);
	Mystack.push(40);
	Mystack.push(50);


	cout << "\nMystack: \n";
	Mystack.Print();

	cout << "\nMystack Size= "<< Mystack.Size()<<"\n";
	cout << "\nMystack top= "<< Mystack.top()<<"\n";
	cout << "\nMystack bottom= "<< Mystack.bottom()<<"\n";
	

	cout << "\nMystack After pop: \n";
	Mystack.pop();
	//Mystack.pop();
	//Mystack.pop();
	//Mystack.pop();
	//Mystack.pop();
	Mystack.Print();

	cout << "\n\nItem (2): " << Mystack.GetItem(2);

	cout << "\n\nMystack After Reverse(): \n";
	Mystack.Reverse();
	Mystack.Print();

	cout << "\n\nMystack After updating Item(2) to 600: \n";
	Mystack.UpdateItem(2, 600);
	Mystack.Print();

	cout << "\n\nMystack After Inserting to 800 After Item(2) : \n";
	Mystack.InsertAfter(2, 800);
	Mystack.Print();

	cout << "\n\nMystack After Inserting at front: \n";
	Mystack.InsertAtFront(1000);
	Mystack.Print();

	cout << "\n\nMystack After Inserting at back: \n";
	Mystack.InsertAtBack(2000);
	Mystack.Print();

	cout << "\n\nMystack After Clear() : \n";
	Mystack.Clear();
	Mystack.Print();
	
	
	
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