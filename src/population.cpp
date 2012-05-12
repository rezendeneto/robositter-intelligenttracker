#include "population.h"

Population::Population() {

}

Population::~Population() {

}

void Population::addIndividual(Individual *ind) {

	individuals.push_back(ind);
}

bool Population::individualBelongsTo(Individual *ind) {
	// Fazer um teste estatístico se o novo indivíduo pertence a população
	return true;
}
