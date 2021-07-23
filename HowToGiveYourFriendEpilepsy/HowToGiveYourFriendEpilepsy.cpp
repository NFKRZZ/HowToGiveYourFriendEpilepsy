#include <iostream>
#include <thread>
#include <Windows.h>
using namespace std;
void hello()
{
	while (true)
	{
		cout << "\n";
	}
}
void bye()
{
	while (true)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		int k = rand() % 254 + 1;
		SetConsoleTextAttribute(hConsole, k);
	}
}
int main()
{
	thread t1(hello);
	thread t2(bye);
	t1.join();
	t2.join();
}
