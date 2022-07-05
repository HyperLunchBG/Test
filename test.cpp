#include "test.h"
#include <iostream>

using namespace std;

test::test(){
	cout<<"Constructor "<<endl;

	name=new char[2];
	price=0.00;
}

test::~test(){
	cout<<"Destructor "<<endl;
	if(name!=nullptr){
		delete[] name;
	}
}

float test::getPrice(){
	return this->price;
	/*cout<<price<<endl;
	return price;*/
}

void test::setPrice(float price) {
	if(price>=0){
		this->price = price;
	}
	else {
		this->price = 0;
	}
}

int func(int a, int b) {
	return a+b;
}
