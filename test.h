#pragma once //#ifndef _TEMP_H (designed to cause the current source file to be included only once in a single compilation) 
//#define _TEMP_H

class test{
	private:
		char * name;
		float price;

	public:
		test();
		~test();
		float getPrice();
		void setPrice(float price);
};

int func(int, int);

//#endif
