#include "complex.h"
#include <cmath>

complex operator+(const complex& c1,const complex& c2)
{
	complex c;
	c.setReal(c1.getReal() + c2.getReal());
	c.setImg(c1.getImg() + c2.getImg());
	return c;
}

complex operator-(const complex& c1, const complex& c2)
{
	complex c;
	c.setReal(c1.getReal() - c2.getReal());
	c.setImg(c1.getImg() - c2.getImg());
	return c;
}

complex operator*(const complex& c1, const complex& c2)
{
	complex c;
	c.setReal(c1.getReal()*c2.getReal() - c1.getImg()*c2.getImg());
	c.setImg(c1.getReal()*c2.getImg() + c1.getImg()*c2.getReal());
	return c;
}

std::ostream& operator<<(std::ostream &out, const complex &c)
{
	out << c.getReal() << "+" << c.getImg() << "i";
	return out;
}

std::istream& operator>>(std::istream &in, complex &c)
{
	double r, i;
	in >> r;
	in >> i;
	c.setReal(r);
	c.setImg(i);
	return in;
}

void complex::setReal(double r)
{
	a = r;
}
void complex::setImg(double i)
{
	b = i;
}

double complex::getReal() const
{
	return a;
}

double complex::getImg() const
{
	return b;
}

double complex::getAbs() const
{
	double r = getReal();
	double i = getImg();
	return std::sqrt(r*r+i*i);
}

