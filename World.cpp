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

void World::createWorld() {

	ifstream fichier("img/map.txt");

	if(!fichier) {

		cout << "Erreur: Impossible d'ouvrir le fichier" << endl;
	}

	string ligne;
	getline(fichier, ligne);
	vector<int> res = split(ligne, ' ');

	setWidth(res[0]);
	setHeight(res[1]);


	


}

void World::affiche() {

	cout << "x= " << getWidth() << endl;
	cout << "y= " << getHeight() << endl;


}

