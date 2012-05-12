#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

class Individual {

	public:
		Individual();
		virtual ~Individual();
		
		void setWidth(int w);
		void setHeight(int h);
		void setX(int a);
		void setY(int a);
		int getWidth();
		int getHeight();
		int getX();
		int getY();
		double getProportion();
		
		void printInfo();
	protected:
	private:
		int width;
		int height;
		int x;
		int y;
};

#endif
