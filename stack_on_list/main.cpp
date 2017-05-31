#include <iostream>
#define TEST 1

#if TEST == 1
#include "StackNode.h"

int main()
{
	Stack<char> St;
	St.push('a');
	St.push('b');
	St.push('d');
	St.push('c');
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

int main()
{
	try
	{
		NodeQueue<int> Queue;
		Queue.enqueue(10);
		Queue.enqueue(20);
		Queue.enqueue(30);
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