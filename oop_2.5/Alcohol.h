//////////////////////////////////////////////////////////////////////////////
// Alcohol.h
// заголовний файл Ц визначенн€ класу

#pragma once
#include "Liquid.h"

using namespace std;

class Alcohol
{
private:
	double volume;
	Liquid liquid;
public:
	double getVolume() const { return volume; }
	Liquid getLiquid() const { return liquid; }
	void setVolume(double volume) { this->volume = volume; }
	void setLiquid(Liquid liquid) { this->liquid = liquid; }
	void Init(double volume, Liquid liquid);
	void Display() const;
	void Read();
	Alcohol(const string name = "", const double density = 0, const double volume = 0);
	Alcohol(const Alcohol& s);
	Alcohol& operator = (const Alcohol& s);
	friend ostream& operator << (ostream& out, const Alcohol& s);
	friend istream& operator >> (istream& in, Alcohol& s);
	operator string () const;
	Alcohol& operator ++ ();
	Alcohol& operator -- ();
	Alcohol operator ++ (int);
	Alcohol operator -- (int);
	~Alcohol(void);
};
