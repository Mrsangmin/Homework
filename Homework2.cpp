#include <iostream>
using namespace std;

class Animal {
public :
	virtual void makesound() = 0;

};

class Dog : public Animal {
public :
	virtual void makesound() override {
		cout << "�������� ¢�´� : ��!��!" << endl;
	}
};

class Cat : public Animal {
public:
	virtual void makesound() override {
		cout << "����̰� ��� : �߿�!" << endl;
	}
};

class Cow : public Animal {
public:
	virtual void makesound() override {
		cout << "�Ұ� ��� : ����~" << endl;
	}
};

int main() {

	Dog dog;
	dog.makesound();

	Cat cat;
	cat.makesound();

	Cow cow;
	cow.makesound();

	return 0;
}



