#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product
{
	public:
		int id;
		string title;		
	public:
		Product();
		Product(int id, string title);
		int getId();
		string getTitle();
	    void SetTitle(string title);
		~Product();
	protected:
};

#endif
