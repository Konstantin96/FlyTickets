#pragma once
#include "Libery.h"
#include "Date.h"

class Order
{
private:
	string OrderNo;
	Date flight_date;
	string PassengerName;
	string PassengerSname;
public:
	Order() {
		OrderNo = "";
		flight_date = Date();
		PassengerName= "";
		PassengerSname = "";
	}
	bool operator==(string oredername) {
		return (this->OrderNo == oredername);
	}

	bool operator==(Date d) {
		return(flight_date == d);
	}

	string getOrder()const { return OrderNo; }

	friend istream& operator >> (istream& is, Order& obj);
	friend ostream& operator << (ostream& ios, Order obj);
};

