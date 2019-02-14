#include <iostream>
#include <random>

using namespace std;

string randDNA(int seed, string bases, int x)
{	
	mt19937 eng1(seed);
	string DNA;
	uniform_int_distribution<>un(0, bases.size()-1);
	
	for(int i=0 ;  i < x ;  i++) 
	{ 
		DNA+= bases[un(eng1)];
	}
	return DNA; 
}
