#include<string>
#include<random>
#include<iostream>
using namespace std;


string randDNA(int seed, string bases, int n){
	
		
		std::mt19937 eng1(seed);
		std::uniform_int_distribution<int> unifrm(0,3);
		
		string mystring = "";
		for(int i=1; i <= n; i++)
		{
		
		int value = unifrm(eng1);
		mystring = mystring + bases[value];
		}
		
			return mystring;
	}
	
	
	
	

