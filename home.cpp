#include <iostream>
using namespace std;

template <typename T>  // typename ���� Ÿ�� �������� ����
class SimpleVector {
private:
	T* arr;
	int capacity;
	int size;

public:
	SimpleVector() : capacity(10), size(0) {
		arr = new T[capacity];
	}

	~SimpleVector() {
		delete[] arr;
	}

	void push_back(T value) {
		if (size < capacity) {
			arr[size] = value;
			size++;
		}
	}

	void pop_back() {
		if (size > 0) {
			size--;
		}
	}

	T get_size() const {
		return size;
	}

	T get_capacity() const {
		return capacity;
	}
};

int main() {
	return 0;
}
