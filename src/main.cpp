#include <iostream>
#include "individual.cpp"
#include "population.cpp"

using namespace std;

Population *workingPop;
Population *prospectionPop;

Individual *newIndividual;

void initializePopulation(int max) {

	cout << "Inicialize " << max << " indivíduos para a população inicial" << endl;
	
	int width, height, x, y;

	for(int i = 0; i < max; i++) {
	
		cin >> width;
		cin >> height;
		cin >> x;
		cin >> y;
	
		Individual *ind = new Individual();
		
		ind->setWidth(width);
		ind->setHeight(height);
		ind->setX(x);
		ind->setY(y);
		
		workingPop->addIndividual(ind);
	}
	
	cout << "Ok!" << endl;
}

void insertNewIndividual() {

	cout << "Adicione um novo indivíduo" << endl;
	int width, height, x, y;

	cin >> width;
	cin >> height;
	cin >> x;
	cin >> y;

	newIndividual = new Individual();
	
	newIndividual->setWidth(width);
	newIndividual->setHeight(height);
	newIndividual->setX(x);
	newIndividual->setY(y);
}

void definePopulations() {
	
}

void evaluateAndInsertIndividual(Individual *individual) {

	// Ver em qual população o individual merece entrar e insere-o
	if(workingPop->individualBelongsTo(individual)) {
		workingPop->addIndividual(individual);
		cout << "Indivíduo adicionado a workingPop!" << endl;
	}
	else {
		prospectionPop->addIndividual(individual);	
		cout << "Indivíduo adicionado a prospectionPop!" << endl;
	}
}

int main(int argc, char* argv[]) {

	// Parametros de debug!
	int maxIndividuals = 5;

	// Cria duas populações (verdade e prospectiva)
	Population *pop0 = new Population();
	Population *pop1 = new Population();
	
	workingPop = pop0;
	prospectionPop = pop1;

	// Gera população inicial -> Para fins de teste, fazer um loop que adiciona 120 individuos
	initializePopulation(maxIndividuals);
	
	while(true) {
	
		// Adiciona um individuo por iteração
		insertNewIndividual();
	
		// Avalia individuo
		evaluateAndInsertIndividual(newIndividual);
	
		// Define a população verdade
		definePopulations();
	
		// Se individuo inserido na pop verdade entao
			// Toma decisão
	}

	delete pop0;
	delete pop1;

	return 0;
}
