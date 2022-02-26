#include <iostream>
#include <vector>
#include <string>

int main(){
	std::vector<std::string> words;
	
	std::string temp;
	for(int i=0; i<10; ++i){
		std::printf("Word %d: ", i+1);
		std::cin >> temp;
		words.push_back(temp);
	}

	std::string max_str = "";
	for(int i=0; i<10; ++i){
		if(words[i].length() > max_str.length()){
			max_str = words[i];
		}
	}
	std::printf("\n%s\n", max_str.c_str());
	return 0;
}
