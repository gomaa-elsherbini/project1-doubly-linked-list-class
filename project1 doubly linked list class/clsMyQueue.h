#pragma once
#include "clsDblLinkedList.h"

template <class T>
class clsMyQueue
{
protected:
	clsDblLinkedList <int> _MyList;
public:
	void push(int item)
	{
		_MyList.InsertAtEnd(item);
	}

	void Print()
	{
		_MyList.printNode();
	}
	
	int Size()
	{
		return _MyList.Size();
	}

	void pop()
	{
		_MyList.DeleteFirstNode();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T GetItem(int index)
	{
		return _MyList.GetItem(index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(int index, T newValue)
	{
		_MyList.UpdateItem(index, newValue);
	}
	
	void InsertAfter(int index, T newValue)
	{
		_MyList.InsertAfter(index, newValue);
	}

	void InsertAtFront(T value)
	{
		_MyList.InsertAtBegining(value);
	}
	
	void InsertAtBack(T value)
	{
		_MyList.InsertAtEnd(value);
	}

	void Clear()
	{
		_MyList.Clear();
	}
};
//class clsMyQueue 
//{
//protected:
//    int size = 0;
//public:
//    class Node
//    {
//    public:
//
//        T value;
//        Node* next;
//        Node* prev;
//    };
//
//    Node* head = NULL;
//
//    void printNode()
//    {
//        //Reverse();
//        Node* current = head;
//
//        if (current == NULL)
//        {
//            cout << "\nThere are no Nodes!\n";
//            return;
//        }
//
//        while (current != NULL)
//        {
//            cout << current->value << " ";// 1 2 3 4 5
//            current = current->next;
//        }
//        cout << "\n";
//    }
//
//    Node* FindeNode(T val)
//    {
//        Node* nodeToFind = head;
//
//        while (nodeToFind != NULL)// 1 2 3 4 5
//        {
//            if (nodeToFind->value == val)
//                return nodeToFind;
//
//            nodeToFind = nodeToFind->next;
//        }
//        return NULL;
//    }
//
//    void InsertAtBeginning(T value)
//    {
//        Node* newNode = new Node();
//
//        newNode->value = value;
//        newNode->prev = NULL;
//        newNode->next = head;
//
//        if (head != NULL)
//            head->prev = newNode;
//
//        head = newNode;
//        size++;
//    }
//
//    void InsertNodeAtBegining(Node* Head, T value)
//    {
//        Node* newNode = new Node();
//
//        newNode->value = value;
//        newNode->prev = NULL;
//        newNode->next = Head;
//
//        if (Head != NULL)
//            Head->prev = newNode;
//
//        Head = newNode;
//        size++;
//    }
//
//    void InsertAfter(Node* NodeBefore, int valueToInsert)
//    {
//        Node* newNode = new Node();
//
//        if (NodeBefore == NULL)
//        {
//            cout << "\nThe gevin pervius Node can not be NULL! \n";
//            return;
//        }
//
//        newNode->value = valueToInsert;
//        newNode->next = NodeBefore->next; //1 2 3 4
//        newNode->prev = NodeBefore;
//
//        if (NodeBefore->next != NULL)
//            NodeBefore->next->prev = newNode;
//        NodeBefore->next = newNode;
//
//        size++;
//    }
//
//    void push(int valueToInsert)
//    {
//        Node* current = head;
//        Node* newNode = new Node();
//
//        newNode->value = valueToInsert;
//        newNode->next = NULL;
//        
//
//        if (head == NULL)
//        {
//            newNode->prev = NULL;
//            head = newNode;
//            
//            size++;
//            return;
//        }
//
//        Node* lastNode = current;
//        while (current != NULL)
//        {
//            lastNode = current;
//            current = current->next;
//        }
//        
//        lastNode->next = newNode;
//        newNode->prev = lastNode;
//        size++;
//    }
//
//    void DeleteNode(Node* nodeToDelete)
//    {
//        Node* firstNode = head;
//
//        if (head == NULL) return;
//
//        //if node is the only node
//        if (head != NULL && nodeToDelete->prev == NULL && nodeToDelete->next == NULL)
//        {
//            head = NULL;
//            delete nodeToDelete;
//            size--;
//            return;
//        }
//
//        //if node is the first node
//        if (head != NULL && nodeToDelete->prev == NULL && nodeToDelete->next != NULL)
//        {
//            head = nodeToDelete->next;
//            nodeToDelete->next->prev = NULL;
//            delete nodeToDelete;
//            size--;
//            return;
//        }
//
//        //if node is the last node
//        if (head != NULL && nodeToDelete->prev != NULL && nodeToDelete->next == NULL)
//        {
//            nodeToDelete->prev->next = NULL;
//            head = firstNode;
//            delete nodeToDelete;
//            size--;
//            return;
//        }
//
//        //if node isnot found
//        if (nodeToDelete == NULL)
//        {
//            cout << "\nnode is not found= " << "\n";
//            head = firstNode;
//            return;
//        }
//
//        //if node isnot null
//        if (nodeToDelete != NULL)
//        {
//            nodeToDelete->prev->next = nodeToDelete->next;////
//            nodeToDelete->next->prev = nodeToDelete->prev;
//            head = firstNode;
//            delete nodeToDelete;
//            size--;
//        }
//    }
//
//    void pop()
//    {
//        Node* temp = head;
//
//        if (head == NULL)return;// 1 2 3 4
//
//        head = head->next;
//
//        if (head != NULL)
//            head->prev = NULL;
//
//        delete temp;
//        size--;
//        //Reverse();
//    }
//
//    void DeleteLastNode()
//    {
//        if (head == NULL)return;
//
//        if (head->next == NULL)
//        {
//            delete head;
//            head = NULL;
//
//            size--;
//            return;
//        }
//
//        Node* current = head;
//        while (current->next->next != NULL)
//        {
//            current = current->next;
//        }
//        Node* temp = current->next;
//        current->next = NULL;
//        delete temp;
//
//        size--;
//
//        /*
//        if (head == NULL)return;
//
//        Node* current = head;
//
//        Node* lastNode = new Node();
//        while (current != NULL)
//        {
//            lastNode = current;
//            current = current->next;
//        }
//
//        if (lastNode->prev != NULL)
//            lastNode->prev->next = NULL;
//        else
//            head = NULL;
//
//        delete lastNode;
//        */
//    }
//
//    int Size()
//    {
//        return size;
//    }
//
//    bool IsEmpty()
//    {
//        return Size() == 0 ? true : false;
//    }
//
//    void Clear()
//    {
//        while (size > 0)
//            pop();
//    }
//
//    void Reverse()
//    {
//        //if (head == NULL)return;
//
//        Node* current = head;
//        Node* temp = nullptr;
//
//        while (current != NULL)
//        {
//            temp = current->prev;
//            current->prev = current->next;
//            current->next = temp;
//
//            current = current->prev;
//        }
//
//        if (temp != nullptr)
//            head = temp->prev;
//    }
//
//    Node* GetNode(int index)
//    {
//        int pos = 0;
//        Node* current = head;
//
//        if (index > size - 1 || index < 0)return NULL;
//
//        while (current != NULL && (current->next != NULL))// 1 2 3 4 5 
//        {
//            if (index == pos)
//                break;
//
//            current = current->next;
//            pos++;
//        }
//        return current;
//    }
//
//    int front()
//    {
//        Node* ItemNode = GetNode(0);
//
//        if (ItemNode == NULL)return NULL;
//
//        else return ItemNode->value;
//    }
//
//    int back()
//    {
//        Node* ItemNode = GetNode(size - 1);
//
//        if (ItemNode == NULL)return NULL;
//
//        else return ItemNode->value;
//    }
//
//    bool UpdateItem(int index, int newValue)
//    {
//        Node* ItemNode = GetNode(index);
//
//        if (ItemNode != NULL)
//        {
//            ItemNode->value = newValue;
//            return true;
//        }
//        else
//            return false;
//    }
//
//    bool InsertAfter(int index, int value)
//    {
//        Node* ItemNode = GetNode(index);
//
//        if (ItemNode != NULL)
//        {
//            Node* newNode = new Node();
//            InsertAfter(ItemNode, value);
//            /*newNode->value = value;
//            newNode->next = ItemNode->next;
//            newNode->prev = ItemNode;
//            ItemNode->next = newNode;*/
//            return true;
//        }
//        else
//            return false;
//    }
//	
//
//
//};

