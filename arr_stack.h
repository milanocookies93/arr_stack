#ifndef ARR_QUEUE_H
#define ARR_QUEUE_H

template <class T>
class ARR_Queue {
	public:
		ARR_Queue();
		~ARR_Queue();
		void push(T item);
		T pop();
	private:
		void resize();
		T* arr;
		int front;
		int back;
		int size;
};

#endif
