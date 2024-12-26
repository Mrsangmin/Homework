#include <iostream>
using namespace std;

class Animal {
public :
	virtual void makesound() = 0;

};

class Dog : public Animal {
public :
	virtual void makesound() override {
		cout << "강아지가 짖는다 : 멍!멍!" << endl;
	}
};

class Cat : public Animal {
public:
	virtual void makesound() override {
		cout << "고양이가 운다 : 야옹!" << endl;
	}
};

class Cow : public Animal {
public:
	virtual void makesound() override {
		cout << "소가 운다 : 음머~" << endl;
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



