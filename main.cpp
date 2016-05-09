#include "arr_queue.h"

#include <iostream>
using namespace std;

int main()
{
	ARR_Queue<int> q;
	for (int i=0; i<5; i++)
		q.push(i);
	for (int j=0; j<5; j++)
		cout << q.pop() << endl;
	return 0;
}
