#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <ctime>
#include <queue>
#include <stack>
using namespace std;




class clsQueueLine
{
private:
	string _Prifix;
	int _ServiceTime;

	class _clsClient
	{
	public:
		int number = 0;
		string time;
		int _timeBeforeServe = 0;
	};

	queue <_clsClient> _Queue;

	int _ClientNumber = 0;
	int _WaitingClients = 0;
	int _ServedClients = 0;
	int _TotalTickets = 0;

	void _updateQueue()
	{
		_clsClient Client;
		queue <_clsClient> updatedQueue;
		int WaitingClients = 0;

		while (!_Queue.empty())
		{
			Client.number = _Queue.front().number;
			Client.time = _Queue.front().time;
			Client._timeBeforeServe = WaitingClients * _ServiceTime;

			updatedQueue.push(Client);
			WaitingClients++;

			_Queue.pop();
		}
		_Queue = updatedQueue;
	}
	string GetCurrentTime()
	{
		string Time = "";
		time_t t = time(0);
		tm* now = localtime(&t);

		Time += to_string(now->tm_mday) + "/";
		Time += to_string(now->tm_mon + 1) + "/";
		Time += to_string(now->tm_year + 1900) + " - ";
		Time += to_string(now->tm_hour) + ":";
		Time += to_string(now->tm_min) + ":";
		Time += to_string(now->tm_sec);

		return Time;
	}

public:

	clsQueueLine(string prifix, int serviceTime)
	{
		_Prifix = prifix;
		_ServiceTime = serviceTime;
	}
	
	void IssueTicket()
	{
		_clsClient Client; 

		_ClientNumber++;
		
		Client.time = GetCurrentTime();
		Client.number = _ClientNumber;
		Client._timeBeforeServe = _WaitingClients * _ServiceTime;

		_WaitingClients++;
		_TotalTickets++;

		_Queue.push(Client);
	}

	void PrintInfo()
	{
		cout << "\n\t\t\t\t___________________________\n";
		cout << "\n\t\t\t\t         Queue Info";
		cout << "\n\t\t\t\t___________________________\n";

		cout << "\n\t\t\t\t    Prefix         = " << _Prifix;
		cout << "\n\t\t\t\t    Total Tickets  = " << _TotalTickets;
		cout << "\n\t\t\t\t    Served Clients = " << _ServedClients;
		cout << "\n\t\t\t\t    Wating Clients = " << _WaitingClients;

		cout << "\n\t\t\t\t___________________________";
	}
	void PrintTicketsLineLTR()
	{
		cout << "\n\n\t\t\tTickets:   ";

		for (int i = _WaitingClients; i >=1 ; i--)
			cout<< _Prifix << i << " <-- ";
	}
	void PrintTicketsLineRTL()
	{
		cout << "\n\n\n\t\t\tTickets:   ";

		for (int i = 1; i <= _WaitingClients; i++)
			cout << " --> " << _Prifix << i;
	}
	
	void PrintAllTickets()
	{
		queue <_clsClient> allTicketsQueue = _Queue;

		cout << "\n\n\n\t\t\t\t     ---Tickets---";

		while (!allTicketsQueue.empty())
		{
			int Clientnumber = allTicketsQueue.front().number;
			
			cout << "\n\t\t\t\t_______________________\n";
			cout << "\n\t\t\t\t\t " << _Prifix
				<< Clientnumber << "\n\n";
			
			cout<< "\t\t\t\t " << allTicketsQueue.front().time;
			
			cout << "\n\t\t\t\t  Wating Clients: " << _WaitingClients;
						
			cout << "\n\t\t\t\t   Serve Time In"
			<< " \n\t\t\t\t     " << allTicketsQueue.front()._timeBeforeServe
			<< " Minutes";
			allTicketsQueue.pop();
			
			cout << "\n\n\t\t\t\t_______________________";
		}
	}
	
	void ServeNextClient()
	{
		_Queue.pop();
		_updateQueue();

		_ServedClients++;
		_WaitingClients--;
	}

};