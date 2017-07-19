#ifndef MAIN_CPP
#define MAIN_CPP

#include "commit.h"
#include "initialize.h"
int main(int argc, char *argv[]) {
	
	if (argv[1] == "--commit" || argv[1] = "-c") {
		//for (int i = 0; i < argc; ++i) {
			//cout << argv[i] << endl;
		//}
		commit(argv[2], argv[3]);
	}
	if (argv[1] == "--init" || argv[1] = "-i") {
		init(argv[2]);
	}
	
	if (argv[1] == "") {
		std::cout << "proj: no arguements given!" << endl; 
	}
	
	return 0; 
	
}
#endif