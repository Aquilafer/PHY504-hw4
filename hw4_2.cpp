#include <iostream>
#include <vector>
#include <string>

int main(){
	// initialize vector
	std::vector<std::string> words;
	
	// read words from user 
	std::string temp;
	for(int i=0; i<10; ++i){
		std::printf("Word %d: ", i+1);
		std::cin >> temp;
		words.push_back(temp);
	}

	// find longest
	std::string max_str = "";
	for(int i=0; i<10; ++i){
		if(words[i].length() > max_str.length()){
			max_str = words[i];
		}
	}

	// new line in from for when cin takes multiple words and doesn't terminate with a newline
	std::printf("\n%s\n", max_str.c_str());
	return 0;
}
