#include "individual.h"

Individual::Individual() {

}

Individual::~Individual() {

}

void Individual::setWidth(int w) {

	width = w;
}

void Individual::setHeight(int h) {
	
	height = h;
}

void Individual::setX(int a) {

	x = a;
}

void Individual::setY(int a) {
	
	y = a;
}

int Individual::getWidth() {

	return width;
}

int Individual::getHeight() {

	return height;
}

int Individual::getX() {

	return x;
}

int Individual::getY() {

	return y;
}

double Individual::getProportion() {
	return (double)width/(double)height;
}

void Individual::printInfo() {

	cout << "O individuo possui ";
	cout << "largura: " << width;
	cout << ", altura: " << height;
	cout << ", abcissa: " << x;
	cout << ", ordenada: " << y;
	cout << " e proporção: " << getProportion() << endl;
}
