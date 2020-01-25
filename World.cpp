#include "World.h"


World::~World() {

	cout << "Appel du destructeur World" << endl;
}

//Fonction permettant de séparer simplement les dimensions du fichier
vector<int> World::split(const string &s, char delimiter) {

	vector<int> dims;
	string token;
	istringstream tokenStream(s);
	while(getline(tokenStream, token, delimiter)) {
		dims.push_back(stoi(token));
	}

	return dims;
}

//Fonction qui crée et initialise le monde
void World::createWorld(const string &path) {

	//Ouverture du fichier
	ifstream fichier(path);

	if(!fichier) {

		cout << "Erreur: Impossible d'ouvrir le fichier" << endl;
	}

	//Récupération des dimensions
	string ligne;
	getline(fichier, ligne);
	vector<int> res = split(ligne, ' ');

	setWidth(res[0]);
	setHeight(res[1]);
	tabMonde.resize(height, vector<int>(width));

	//Récupération de chaque caractère
	int i = 0, j = 0;
	char a = 1;

	while(a) {
		a = 0;
		fichier.get(a);
		
		if(a == '\n'){

			j += 1;
			i = 0;
		} else if(a) {

			tabMonde[j][i] = a-'0';
			i += 1;
		}
	}
	


}

