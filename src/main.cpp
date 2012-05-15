#include <iostream>
#include <cstdio>
#include "individual.cpp"
#include "population.cpp"

using namespace std;

Population *workingPop;
Population *prospectionPop;
Population *lastPopulationIntegrated;

// Inicializa a população inicial de acordo com o número de indivíduos passados como argumento
void initializePopulation(int max) {

	cout << "Inicialize " << max << " indivíduos para a população inicial" << endl;
	
	int x0, y0, x1, y1;
	
	cin >> x0;
	cin >> y0;
	cin >> x1;
	cin >> y1;

	for(int i = 0; i < max; i++) {
	
		Individual *ind = new Individual();
		
		ind->setPoint0(x0, y0);
		ind->setPoint1(x1, y1);
		
		workingPop->addIndividual(ind);
	}
	
	cout << "Ok!" << endl;
}

// Obtém um novo indivíduo a partir dos valores inseridos pelo usuário
Individual* getNewIndividual() {

	cout << "Adicione um novo indivíduo" << endl;
	int x0, y0, x1, y1;

	cin >> x0;
	cin >> y0;
	cin >> x1;
	cin >> y1;

	Individual *individual = new Individual();
		
	individual->setPoint0(x0, y0);
	individual->setPoint1(x1, y1);
	
	return individual;
}

// Define as populações verdade e de prospecção baseado na 
// quantidade de indivíduos que entraram para cada uma delas
void definePopulations() {
	// Por enquanto não faz nada! (:
}

// Toma as decisões de comando (para o robô) de acordo com o 
// indivíduo passado como argumento
void doTheDecisionsTo(Individual *individual) {
	// Por enquanto não faz nada! (:
}

// Avalia e insere o indivíduo de acordo com a população que ele pertence
void evaluateAndInsertIndividual(Individual *individual) {

	// Ver em qual população o individual pertence e insere-o à mesma
	if(workingPop->individualBelongsTo(individual)) {
		workingPop->addIndividual(individual);
		lastPopulationIntegrated = workingPop;
		cout << "Indivíduo adicionado a workingPop!" << endl;
	}
	else {
		prospectionPop->addIndividual(individual);	
		lastPopulationIntegrated = prospectionPop;
		cout << "Indivíduo adicionado a prospectionPop!" << endl;
	}
}

int main(int argc, char* argv[]) {

	int maxIndividuals;
	
	cout << "Digite o número de indivíduos para a população inicial" << endl;
	
	// Parâmetro de debug para o máximo de indivíduos que serão adicionados à pop. inicial
	cin >> maxIndividuals;

	// Cria duas populações (verdade e prospectiva)
	Population *pop0 = new Population();
	Population *pop1 = new Population();
	
	// Define a pop0 como a população verdade inicial
	workingPop = pop0;
	
	// Define a pop1 como a população de prospecção inicial
	prospectionPop = pop1;

	// Gera população inicial -> Para fins de teste, fazer um loop que adiciona o nr individuos definidos em maxIndividuals
	initializePopulation(maxIndividuals);
	
	// Cada iteração é uma geração
	for(int i = 0; ;i++) {
	
		// Adiciona um individuo por iteração
		Individual *newIndividual = getNewIndividual();
	
		// Avalia individuo
		evaluateAndInsertIndividual(newIndividual);
	
		// Define a população verdade
		definePopulations();
	
		// Se individuo inserido na pop verdade entao toma decisao
		if(lastPopulationIntegrated == workingPop)
			doTheDecisionsTo(newIndividual);
	}

	// Libera a memória ocupada pelos objetos pop0 e pop1
	delete pop0;
	delete pop1;

	return 0;
}
