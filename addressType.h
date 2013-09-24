//Ch14_Ex1: addressType.h
// private: streetAddress, city, state, zip
// public: print(), setAddress, getAddress, addressType constructor


#ifndef H_addressType // include guards
#define H_addressType // include guards

#include <string> // to use string class

using namespace std;

class addressType
{
public:
	void print() const;
	void setAddress(string stAddress, string c, string s, string z);
	void getAddress(string& stAddress, string& c, 
					string& s, string& z);

	addressType(string stAddress = "", string c = "",
			    string s = "", string z = ""); // constructor

private:
	string streetAddress;
	string city;
	string state;
	string zip;
};

#endif