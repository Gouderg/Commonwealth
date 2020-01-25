#ifndef WORLD_H
#define WORLD_H
#include <iostream>
#include <fstream> //Lecture fichier
#include <sstream>
#include <ostream> 
#include <string>
#include <vector>


using namespace std;



class World {

	public:

		//Constructeur
		World(const string &path, int init_width = 0, int init_height = 0) : 
			width(init_width),
			height(init_height),
			tabMonde(height, vector<int>(width)) 
			{ createWorld(path); }
		
		//Destructeur
		~World();

		//Getter
		int getWidth() const {return width;}
		int getHeight() const {return height;}
		int getPosition(const int j, const int i) const {return tabMonde[j][i];}

		//Setter
		void setWidth(int const width) {this -> width = width ;}
		void setHeight(int const height) {this -> height = height ;}


		vector<int> split(const string &s, char delimiter); 
		void createWorld(const string &path);

	private:
		int width;
		int height;
		vector<vector<int>> tabMonde;




};

inline ostream & operator<<(ostream &Str, const World &world) {

	for(int j = 0; j < world.getHeight(); j++) {
		for(int i = 0; i < world.getWidth(); i++){
			Str << world.getPosition(j,i);
		}
		Str << '\n';

	}
	return Str;
}

#endif