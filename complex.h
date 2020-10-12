#include <iostream>

class complex
{
private:
	double real;
	double img;

public:
	complex(double real = 0, double img = 0):
		real(real),
		img(img)
	{
	}
	double getAbs() const;
	double getImg() const;
	double getReal() const;
	friend complex operator+(const complex& c1, const complex& c2);
	friend complex operator-(const complex& c1, const complex& c2);
	friend complex operator*(const complex& c1, const complex& c2);
	friend std::ostream& operator<<(std::ostream &out, const complex &c);
	friend std::istream& operator>>(std::istream &in, complex &c);
};
