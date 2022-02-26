#include <iostream>
#include <vector>

int main(){
	using RealMatrix = std::vector<std::vector<int>>;
	
	int n = -1;

	//fetch input
	std::printf("Input size of identity matrix\n");
	std::cin >> n;
	while(n < 0){
		std::printf("Invalid value. Please input a positive integer.\n");
		std::cin >> n;
	}

	RealMatrix I(n, std::vector<int>(n, 0));
	for(int i=0; i<n; ++i){
		I[i][i] = 1;
	}

	//print matrix
	for(int i=0; i<I.size(); ++i){
		for(int j=0; j<I[i].size(); ++j){
			std::printf(" %d", I[i][j]);
		}
		std::printf(" \n");
	}
	return 0;
}

