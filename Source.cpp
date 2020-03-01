#include <iostream>
#include "ArrayBasedQueue.cpp"

using namespace std;

int main() {
	Queue *q = new Queue();

	cout << q->IsEmpty() << endl;

	cout << "Enqueued 1" << endl;
	q->Enqueue(1);
	q->printQueue();

	cout << "Enqueued 2" << endl;
	q->Enqueue(2);
	q->printQueue();

	cout << "Dequeued " << q->Dequeue() << endl;
	q->printQueue();

	cout << "Dequeued " << q->Dequeue() << endl;
	q->printQueue();

	try {
		cout << "Dequeued " << q->Dequeue() << endl;
		q->printQueue();
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

	cout << "Enqueued 3" << endl;
	q->Enqueue(3);
	q->printQueue();

	cout << "Enqueued 4" << endl;
	q->Enqueue(4);
	q->printQueue();

	cout << "Enqueued 5" << endl;
	q->Enqueue(5);
	q->printQueue();

	cout << "Enqueued 6" << endl;
	q->Enqueue(6);
	q->printQueue();

	cout << "Enqueued 7" << endl;
	q->Enqueue(7);
	q->printQueue();

	cout << "Enqueued 8" << endl;
	q->Enqueue(8);
	q->printQueue();

	cout << "Enqueued 9" << endl;
	q->Enqueue(9);
	q->printQueue();

	cout << "Enqueued 10" << endl;
	q->Enqueue(10);
	q->printQueue();
	
	cout << "Enqueued 11" << endl;
	q->Enqueue(11);
	q->printQueue();

	cout << "Enqueued 12" << endl;
	q->Enqueue(12);
	q->printQueue();

	try {
		cout << "Enqueued 13" << endl;
		q->Enqueue(13);
		q->printQueue();
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

	delete q;
}