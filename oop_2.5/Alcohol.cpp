//////////////////////////////////////////////////////////////////////////////
// Alcohol.cpp
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף

#include "Liquid.h"
#include "Alcohol.h"
#include <sstream>

using namespace std;

void Alcohol::Init(double volume, Liquid liquid)
{
	setVolume(volume);
	setLiquid(liquid);
}

void Alcohol::Display() const
{
	cout << endl;
	cout << "liquid = " << endl;
	liquid.Display();
	cout << "liquid = " << liquid << endl;
}

void Alcohol::Read()
{
	string spec;
	Liquid m;
	cout << endl;
	cout << "liquid = ? " << endl;
	m.Read();
	cout << "volume = ? "; cin >> volume;
	Init(volume, m);
}

Alcohol::Alcohol(const string name, const double density, const double volume)
	: liquid(name, density), volume(volume)
{}

Alcohol::Alcohol(const Alcohol&s)
{
	liquid =s.liquid;
	volume =s.volume;
}

Alcohol& Alcohol::operator =(const Alcohol& s)
{
	liquid =s.liquid;
	volume =s.volume;
	return *this;
}

ostream& operator << (ostream& out, const Alcohol& s)
{
	out << string(s);
	return out;
}

istream& operator >> (istream& in, Alcohol& s)
{
	double volume;
	cout << endl;
	cout << "liquid =  "; in >> s.liquid;
	cout << "volume =  "; in >> volume;
	s.setVolume(volume);
	return in;
}

Alcohol::operator string () const {
	stringstream ss;
	ss << "volume = " << volume << endl;
	return string(liquid)
		+ ss.str();
}

Alcohol& Alcohol::operator ++ () {
	++liquid;
	return *this;
}

Alcohol& Alcohol::operator -- () {
	--liquid;
	return *this;
}

Alcohol Alcohol::operator ++(int)
{
	Alcohol s(*this);
	liquid++;
	return s;
}

Alcohol Alcohol::operator --(int)
{
	Alcohol s(*this);
	liquid--;
	return s;
}

Alcohol::~Alcohol(void)
{}
