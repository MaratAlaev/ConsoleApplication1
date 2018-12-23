
#include"pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Comparison ql, ql2, cos;
	int a, b, c, d, t, y, u, l;
	cout << "Введите x1,x2,x3,x4,y1,y2,y3,y4 \nДля первого четырехугольника ";
	cin >> a >> b >> c >> d >> t >> y >> u >> l;
	ql.setall(a, b, c, d, t, y, u, l);
	cout << "Длина A " <<
		ql.getAlenght() << endl;
	cout << "Длина B " <<
		ql.getBlenght() << endl;
	cout << "Длина C " <<
		ql.getClenght() << endl;
	cout << "Длина D " <<
		ql.getDlenght() << endl;
	cout << "площадь четырехугольника " <<
		ql.getPer() << endl;

	int a2, b2, c2, d2, t2, y2, u2, l2;
	cout << "Введите x1,x2,x3,x4,y1,y2,y3,y4 \nДля второго четырехугольника ";
	cin >> a2 >> b2 >> c2 >> d2 >> t2 >> y2 >> u2 >> l2;
	ql2.setall(a2, b2, c2, d2, t2, y2, u2, l2);
	cout << "Длина A " <<
		ql2.getAlenght() << endl;
	cout << "Длина B " <<
		ql2.getBlenght() << endl;
	cout << "Длина C " <<
		ql2.getClenght() << endl;
	cout << "Длина D " <<
		ql2.getDlenght() << endl;
	cout << "площадь четырехугольника " <<
		ql2.getPer() << endl;
	cos.comparsion(ql.getPer(), ql2.getPer());
	cout << endl;
}


