//Написать программу учета заявок на авиабилеты. Каждая заявка содержит: номер рейса, дату вылета, ФИО пассажира. Обеспечить: 
//*	Добавление заявки в список
//*	Удаление заявки
//*	Вывод всех заявок
//*	Вывод заявок на указанную дату
//* Использовать контейнерный класс list

#include "Orders.h"
#include <fstream>

int main() {
	Orders Olist;
	Order tmp;
	Date d(9, 7, 2018);
	ifstream in_file("Orders.txt");
	if (!in_file) {
		cerr << "File open error" << endl;
	}
	else {
		while (!in_file.eof()){
			in_file >> tmp;
			Olist.Add(tmp);
		}
	}
	Olist.print_All();
	Olist.printOrdersByDate(d);

	system("pause");
	return 0;
}
