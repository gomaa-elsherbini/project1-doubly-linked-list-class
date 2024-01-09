#pragma once
#include<iostream>
using namespace std;



int counter = 0;

template <class T>
class clsDblLinkedList
{
protected:
    int size = 0;
public:
    class Node
    {
    public: 

        T value;
        Node* next;
        Node* prev;
    };
    
    Node* _head= NULL;
    
    void printNode()
    {
        Node* myNode = _head;

        if (myNode == NULL)
        {
            cout << "\nThere are no Nodes!\n";
            return;
        }
        while (myNode != NULL)
        {
            cout << myNode->value << " ";
            myNode = myNode->next;
        }
        cout << "\n";
    }
    
    Node* FindeNode(T val)
    {
        Node* nodeToFind = _head;

        while (nodeToFind != NULL)// 1 2 3 4 5
        {
            if (nodeToFind->value == val)
                return nodeToFind;

            nodeToFind = nodeToFind->next;
        }
        return NULL;
    }

    void InsertAtBegining(T value)
    {
        Node* newNode = new Node();

        newNode->value = value;
        newNode->prev = NULL;
        newNode->next = _head;

        if (
            
            _head != NULL)
            _head->prev = newNode;

         _head = newNode;
        size++;
    }
    
    void InsertAfter(Node* NodeBefore, int valueToInsert)
    {
    	Node* newNode = new Node();

    	if (NodeBefore == NULL)
    	{
    		cout << "\nThe gevin pervius Node can not be NULL! \n";
    		return;
    	}
    	
    	newNode->value = valueToInsert;
    	newNode->next = NodeBefore->next; //1 2 3 4
    	newNode->prev = NodeBefore;
        
        if (NodeBefore->next != NULL)
            NodeBefore->next->prev = newNode;
    	NodeBefore->next = newNode;

        size++;
    }

    void InsertAtEnd(int valueToInsert)
    {
        Node* my_head = _head;
        Node* newNode = new Node();

        newNode->value = valueToInsert;
        newNode->next = NULL;

        if (my_head == NULL)
        {
            newNode->prev = NULL;
            my_head = newNode;
            return;
        }

        Node* lastNode = my_head;
        while (my_head != NULL)
        {
            lastNode = my_head;
            my_head = my_head->next;
        }

        lastNode->next = newNode;
        newNode->prev = lastNode;
        size++;
    }

    void DeleteNode(Node* nodeToDelete)
    {
        Node* firstNode = _head;

        if (_head == NULL) return;

        //if node is the only node
        if (_head != NULL && nodeToDelete->prev == NULL && nodeToDelete->next == NULL)
        {
            _head = NULL;
            delete nodeToDelete;
            size--;
            return;
        }

        //if node is the first node
        if (_head != NULL && nodeToDelete->prev == NULL && nodeToDelete->next != NULL)
        {
            _head = nodeToDelete->next;
            nodeToDelete->next->prev = NULL;
            delete nodeToDelete;
            size--;
            return;
        }

        //if node is the last node
        if (_head != NULL && nodeToDelete->prev != NULL && nodeToDelete->next == NULL)
        {
            nodeToDelete->prev->next = NULL;
            _head = firstNode;
            delete nodeToDelete;
            size--;
            return;
        }

        //if node isnot found
        if (nodeToDelete == NULL)
        {
            cout << "\nnode is not found= " << "\n";
            _head = firstNode;
            return;
        }

        //if node isnot null
        if (nodeToDelete != NULL)
        {
            nodeToDelete->prev->next = nodeToDelete->next;////
            nodeToDelete->next->prev = nodeToDelete->prev;
            _head = firstNode;
            delete nodeToDelete;
            size--;
        }
    }

    void DeleteFirstNode()
    {
        if (_head == NULL)return;

        Node* temp = _head;

        _head = _head->next;

        if (_head != NULL)
            _head->prev = NULL;
        delete temp;
        size--;
    }

    void DeleteLastNode()
    {
        if (_head == NULL)return;

        Node* firstNode = _head;
        Node* lastNode = _head;

        while (_head != NULL)
        {
            lastNode = _head;
            _head = _head->next;
        }

        lastNode->prev->next = NULL;
        _head = firstNode;

        delete lastNode;
        size--;
    }

    int Size()// 1 2 3 4 5 6 7
    {
        return size;
    }

};

