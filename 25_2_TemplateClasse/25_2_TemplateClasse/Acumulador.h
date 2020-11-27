#pragma once
template <class T>
class Acumulador
{
private: 
	T total;
public:
	Acumulador(T inicio): total(inicio) {};
	T operator+=(T const& t){return total = total + t;};
	T GetTotal() const {return total;}
};

//template <>
//class Acumulador<Pessoa>
//{
//private:
//	int total;
//public:
//	Acumulador(int inicio) : total(inicio) {};
//	int operator+=(Pessoa const& t) { return total = total + t.GetIdade(); };
//	int GetTotal() const { return total; }
//};
