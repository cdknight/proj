#ifndef COMMIT_H
#define COMMIT_H
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <chrono>

using namespace std; 
void commit(char * message, char *path) {
	cout << "Commiting \"" << message << "\" to path \"" << path << "\"..." << endl; 
	ofstream out; 
	out.open(path);
	time_t now = time(0);
	char *dt = ctime(&now); 
	out << dt << " # " << message; 
	out.close();  
	return; 
}
#endif