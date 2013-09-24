// Chap3 Ex9.a
// Defined addressType Class that can store a street address, city, state, and zip code
// Include print(), setAddress and getAddress functions, as well as a 
//constructor that automatically initialize the data members



#include <iostream> // cin, cout, etc...
#include <string> // to use string class type
#include "addressType.h" //

using namespace std; 

void addressType::print() const // const because the member var don't change
{
	cout << streetAddress << endl;
	cout << city << ", " << state << " - " << zip << endl;
}

void addressType::setAddress(string stAddress, string c, string s, string z)
{
	streetAddress = stAddress;
	city = c;
	state = s;
	zip = z;
}

void addressType::getAddress(string& stAddress, string& c, 
					string& s, string& z)
{	
	stAddress = streetAddress ;
	c = city;
	s = state;
	z = zip;
}

addressType::addressType(string stAddress, string c, string s, string z)
{
	streetAddress = stAddress;
	city = c;
	state = s;
	zip = z;
}

