#ifndef INDIVIDUALLIST_H
#define INDIVIDUALLIST_H

#include <iostream>

using namespace std;

class IndividualList {

	public:
		IndividualList();
		virtual ~IndividualList();
		
		void addIndividual(Individual *ind);
		void printIndividuals();
	protected:
	private:
};

#endif
