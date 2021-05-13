#include <iostream>

using namespace std;

class computing 
{
private:
	float x;
	float y;
public:
	float getx() 
	{
		return x;
	}
	float gety() 
	{
		return y;
	}
	void setx(float enter_1) 
	{
		x = enter_1;
	}
	void sety(float enter_2) 
	{
		y = enter_2;
	}
	float s() 
	{
		float s = getx() + gety();
		cout << "summa: " << s << endl;
		return s;
	}
	float del() 
	{
		float del = getx() - gety();
		cout << "rasnost': " << del << endl;
		return del;
	}
	float ent() 
	{
		float ent = getx() * gety();
		cout << "umnozhenie: " << ent << endl;
		return ent;
	}
	float d() 
	{
		float d = getx() / gety();;
		cout << "delenie: " << d << endl;
		return d;
	}
};
class calc_s : public computing
{
public:
	float d() 
	{
		float d = getx() / gety();
		cout << "delenie: " << d << endl;
		return d;
	}
	float ostatok()
	{
		float ostatok = static_cast<int>(getx()) % static_cast<int>(gety());
		cout << "ostatok_ot_delenia: " << ostatok << endl;
		return ostatok;
	}
};

void main() 
{
	computing First;
	calc_s Second;
	Second.setx(0);
	Second.sety(2);
	Second.s();
	Second.del();
	Second.d();
	Second.ent();
	Second.ostatok();
}