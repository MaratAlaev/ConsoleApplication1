#include<iostream>
class Quadrilateral
{
protected:
	int x1, x2, x3, x4, y1, y2, y3, y4;
public:
	int Glength(int xB, int xA) {
		int d;
		return d = xB - xA;
	}
	int Vlength(int yB, int yA) {
		int d;
		return d = yB - yA;
	}
	int perimeter(int a, int b, int c, int d) {
		int p;
		return p = a + b + c + d;
	}
	void setall(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4) {
		this->x1 = x1;
		this->x2 = x2;
		this->x3 = x3;
		this->x4 = x4;
		this->y1 = y1;
		this->y2 = y2;
		this->y3 = y3;
		this->y4 = y4;
	}
	int getAlenght() {
		return x2 - x1;
	}
	int getClenght() {
		return x4 - x3;
	}
	int getBlenght() {
		return y2-y1;
	}
	int getDlenght() {
		return y4 - y3;
	}
	int getPer() {
		return getAlenght() + getClenght() + getBlenght() + getDlenght();
	}
};
class Comparison : public Quadrilateral {

public:

	void comparsion(int p, int p2) {
		if (p < p2) {
			std::cout << "Quadrilateral 1 < Quadrilateral 2";
		}
		else if (p > p2)
		{
			std::cout<< "Quadrilateral 1 > Quadrilateral 2";
		}
		else
		{
			std::cout << "Quadrilateral 1 = Quadrilateral 2";
		}
	}
};
