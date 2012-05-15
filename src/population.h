#ifndef POPULATION_H
#define POPULATION_H

#include <iostream>
#include <list>
#include "individual.h"

using namespace std;

class Population {

	public:
		Population();
		virtual ~Population();
		
		void addIndividual(Individual *ind);
		void printIndividuals();
		bool individualBelongsTo(Individual *ind);
	protected:
	private:
		list<Individual*> individuals;

		int widthSum;
		int heightSum;
		int proportionSum;
		
		double widthAvg;
		double heightAvg;
		double proportionAvg;
		
		int widthParam;
		int heightParam;
};

#endif
