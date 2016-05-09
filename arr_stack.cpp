#include "arr_queue.h"

template <class T>
ARR_Queue<T>::ARR_Queue()
{
	front = 0;
	back = 0;
	arr = new T[2];
	size = 2;
}

template <class T>
ARR_Queue<T>::~ARR_Queue()
{
	delete [] arr;
}

template <class T>
void ARR_Queue<T>::push(T item)
{
	if ((front+1)%size == back)
		resize();
	arr[front] = item;
	front = (front+1)%size;
}

template <class T>
T ARR_Queue<T>::pop()
{
	if (front==back)
		return T();
	else
	{
		T ret = arr[back];
		back = (back+1)%size;
		return ret;
	}
}

template <class T>
void ARR_Queue<T>::resize()
{
	T* new_arr = new T[size*2];
	int curr = 0;
	while (back != front)
	{
		new_arr[curr] = arr[back];
		back = (back+1)%size;
		curr++;
	}
	front = curr;
	back = 0;
	size *=2;
	delete [] arr;
	arr = new_arr;
}
