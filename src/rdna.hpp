#include <iostream>
#include <random>

using namespace std;

string randDNA(int seed, string bases, int x)
{	
	mt19937 eng(seed);
	string DNA;
	
	if (bases.size() == 0)
	{
		DNA= "";
		return DNA;
	}
	
	uniform_int_distribution<>un(0, bases.size()-1);
	
	for(int i=0 ;  i < x ;  i++) 
	{ 
		DNA+= bases[un(eng)];
	}
	return DNA; 
}
