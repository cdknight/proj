#ifndef _INITIALIZE_H
#define _INITIALIZE_H
#include <iostream>
#include <string>
#include <experimental/filesystem>
void init(const char *PROJECT_NAME) {
	//initializes a proj project at subdirectory PROJECT_NAME
	if (std::experimental::filesystem::create_directory(PROJECT_NAME)){
		std::cout << "Created proj " << PROJECT_NAME << "successfully. "; 
	}
	else{
		std::cout << "Cannot initialize proj!" << " The call to create_directory() failed." << endl; 
	}
}



#endif