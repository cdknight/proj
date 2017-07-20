#ifdef _FILTER_H
#define _FILTER_H


//includes

#include <vector>
#include <string>
class Filter {
private: 
	std::vector args_list; 
public: 
	Filter(int argc, char*argv[]); //pass regular args into Filter constructor
	bool add_item(string entry); //adds a entry to look for in args. 

};




#endif _FILTER_H