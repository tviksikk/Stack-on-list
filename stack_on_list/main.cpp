#include <iostream>

#define TEST 1

#if TEST == 1
#include "StackNode.h"

int main()
{
	Stack<int> St;
	St.addRandInt();
	St.addRandInt();
	St.addRandInt();
	St.addRandInt();
	St.addRandInt();
	St.addRandInt();
	try
	{
		St.print();
		std::cout << St.top() << '\n';
		St.pop();
		St.print();
		std::cout << St.top() << '\n';
		St.pop();
		St.print();
		std::cout << St.top() << '\n';
		St.pop();
		St.print();
		std::cout << St.top() << '\n';
		St.pop();
		St.print();
	}
	catch (const std::string& e)
	{
		std::cout << e << '\n';
	}
	std::cin.get();
	return 0;
}
#else
#include "Queue.h"
#include <fstream>
int main()
{
	try
	{
		setlocale(NULL, "RUSSIA");
		NodeQueue<std::string> Queue;
		Queue.fillFromFile("file.txt");

		std::cout << "Top is: " << Queue.front() << '\n';
		Queue.dequeue();
		Queue.print();
	}
	catch (const std::string& e)
	{
		std::cout << e << '\n';
	}
	std::cin.get();
}
#endif