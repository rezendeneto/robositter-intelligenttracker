#include "individual.h"

Individual::Individual() {

}

Individual::~Individual() {

}

void Individual::setPoint0(int a, int b) {
	
	x0 = a;
	y0 = b;
}
void Individual::setPoint1(int a, int b) {
	
	x1 = a;
	y1 = b;
}

int Individual::getX0() {

	return x0;
}

int Individual::getY0() {
	
	return y0;
}

int Individual::getX1() {
	
	return x1;
}

int Individual::getY1() {

	return y1;
}

int Individual::getCentralX() {
	
	return (int)(x1-x0)/2;
}

int Individual::getCentralY() {

	return (int)(y1-y0)/2;
}

int Individual::getWidth() {
	
	return x1-x0;
}

int Individual::getHeight() {

	return y1-y0;
}

double Individual::getProportion() {

	return (double)getHeight()/(double)getWidth();
}

void Individual::printInfo() {

	cout << "O individuo possui ";
	cout << "largura: " << getWidth();
	cout << ", altura: " << getHeight();
	cout << " e proporção: " << getProportion() << endl;
}
