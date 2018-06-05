#include "Date.h"

istream & operator >> (istream & is, Date &obj)
{
	char c;
	is >> obj.day>>c >> obj.month>>c >> obj.year ;
	return is;
}

ostream & operator<<(ostream & ios, Date obj)
{
	ios << obj.day << "." << obj.month << "." << obj.year;
	return ios;
}
