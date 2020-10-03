#include <iostream>

class complex
{
private:
	double a;
	double b;

public:
	complex(double a = 0, double b = 0):
		a(a),
		b(b)
	{
	}
	double getAbs() const;
	double getImg() const;
	double getReal() const;
	void setReal(double r);
	void setImg(double i);
	friend std::ostream& operator<<(std::ostream &out, const complex &c);
	friend std::istream& operator>>(std::istream &in, complex &c);
};
