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
		void setPoint0(int a, int b);
		void setPoint1(int a, int b);
		int getX0();
		int getY0();
		int getX1();
		int getY1();
		int getCentralX();
		int getCentralY();
		int getWidth();
		int getHeight();
		double getProportion();
		void printInfo();
	protected:
	private:
		int x0;
		int y0;
		int x1;
		int y1;
};

#endif
