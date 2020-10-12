#include "complex.h"
#include <cmath>

complex operator+(const complex& c1,const complex& c2)
{
	complex c;
	c.real = c1.real + c2.real;
	c.img = c1.img + c2.img;
	return c;
}

complex operator-(const complex& c1, const complex& c2)
{
	complex c;
	c.real = c1.real - c2.real;
	c.img = c1.img - c2.img;
	return c;
}

complex operator*(const complex& c1, const complex& c2)
{
	complex c;
	c.real = c1.real * c2.real - c1.img * c2.img;
	c.img = c1.img * c2.real + c1.real * c2.img;
	return c;
}

std::ostream& operator<<(std::ostream &out, const complex &c)
{
	out << c.getReal() << "+" << c.getImg() << "i";
	return out;
}

std::istream& operator>>(std::istream &in, complex &c)
{
	in >> c.real;
	in >> c.img;
	return in;
}


double complex::getReal() const
{
	return real;
}

double complex::getImg() const
{
	return img;
}

double complex::getAbs() const
{
	double r = getReal();
	double i = getImg();
	return std::sqrt(r*r+i*i);
}

