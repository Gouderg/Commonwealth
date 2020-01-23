#ifndef WORLD_H
#define WORLD_H
#include <iostream>
#include <fstream> //Lecture fichier
#include <sstream> 
#include <string>
#include <vector>


using namespace std;



class World {

	public:

		//Constructeur
		World(int init_width = 0, int init_height = 0) : width(init_width), height(init_height) {}
		
		//Destructeur
		~World();

		//Getter
		int getWidth() const {return width;}
		int getHeight() const {return height;}

		//Setter
		void setWidth(int const width) {this -> width = width ;}
		void setHeight(int const height) {this -> height = height ;}


		vector<int> split(const string &s, char delimiter); 
		void createWorld();
		void affiche();

	private:
		int width;
		int height;
		//int **tabMonde;




};

#endif