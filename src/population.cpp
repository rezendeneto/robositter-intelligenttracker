#include "population.h"

Population::Population() {
	widthParam = 8;
	heightParam = 8;
}

Population::~Population() {

}

void Population::addIndividual(Individual *ind) {

	individuals.push_back(ind);

	widthSum += ind->getWidth();
	heightSum += ind->getHeight();
	proportionSum += ind->getProportion();
	
	widthAvg = (double)widthSum/(double)individuals.size();
	heightAvg = (double)heightSum/(double)individuals.size();
	proportionAvg = (double)proportionSum/(double)individuals.size();
	
	cout << "Média de larguras: " << widthAvg << endl;
	cout << "Média de alturas: " << heightAvg << endl;
	cout << "Média das proporções: " << proportionAvg << endl;
	cout << endl;
}

bool Population::individualBelongsTo(Individual *ind) {
	
	// Fazer um teste estatístico se o novo indivíduo pertence a população
	
	if(ind->getWidth() < widthAvg * 1.5 && ind->getWidth() > widthAvg * 0.5)
		if(ind->getHeight() < heightAvg * 1.5 && ind->getHeight() > heightAvg * 0.5)
			return true;
			
	return false;
}
