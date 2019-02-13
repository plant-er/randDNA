#include<iostream>
#include<random>
#include<string>
//using namespace std;


string randDNA(int seed, string bases, int n){
	
		
		std::mt19937 eng1(seed);
	
		std::uniform_int_distribution<> unifrm(0,n);
		
	
		
		std::cout<<unifrm(eng1)<<" ";
		
			return randDNA;
	}
	
	
	
	

