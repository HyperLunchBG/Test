#include <iostream>

#include "test.h"

using namespace std;

int main() {
	test test1;
	int A = 1, B = 2;
	test1.setPrice(1.5);
	cout<<test1.getPrice()<<endl;
	cout<<func(A, B)<<endl;
	return 0;
}
