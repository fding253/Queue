// Lab
// Fiona Ding
// Due March 1, 2020
#include <iostream>


class Queue {
private:
	const int maxSize = 10;
	int count;
	int front;
	int back;
	int *arr;

public:
	// Constructor
	Queue() {
		count = 0;
		front = 0;
		back = -1;

		arr = new int[maxSize];
	};

	// Destructor
	~Queue() {
		delete arr;
	};

	// Add to end of queue
	void Enqueue(int newValue) {
		// Make sure there's room for another element
		if ((count != 0) && ((back + 1) % maxSize == front)) {
			throw "Error: queue is full";
		}

		// Move back index to next empty position
		back = (back + 1) % maxSize;

		// Add number to queue
		arr[back] = newValue;

		// Increment count
		count++;
	};

	// Return number from front of queue
	int Dequeue() {
		// Emit error if queue is empty
		if (count == 0) {
			throw "Error: queue is empty";
		}

		// Get value to return
		int returnValue = arr[front];

		// Move front index
		front = (front + 1) % maxSize;

		// Decrement count
		count--;

		return returnValue;

	};

	// Check whether queue is empty
	bool IsEmpty() {
		return count == 0;
	};



	// ===== DEBUGGING FUNCTIONS =====
	void printQueue() {
		if (count == 0) {
			return;
		}

		if (front <= back) {
			for (int i = front; i <= back; i++) {
				std::cout << i << ": " << arr[i] << std::endl;
			}
		}
		else {
			for (int i = front; i < maxSize; i++) {
				std::cout << i << ": " << arr[i] << std::endl;
			}
			for (int i = 0; i <= back; i++) {
				std::cout << i << ": " << arr[i] << std::endl;
			}
		}
	}
};