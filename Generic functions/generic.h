#pragma once
#include <iostream>
#include "chikki.h"
template<class T>
class Accum
{
	T _total;

public:
	explicit Accum(T total) : _total(total) {

	}
	T operator+=(T const& secondVariable)
	{
		_total = _total + secondVariable;
		return _total;
	}
	 T GetTotal() {

		 return _total;
	}
	 T GetType() {

		 return _total;
	 }

};

template <>
class Accum<Chikki>
{
	int m_total;

public:
	Accum(int total) : m_total(total) {

	}
	int operator+=(Chikki const& chikki6)
	{
		m_total = m_total + chikki6.GetPrice();

		return m_total;
	}
	int GetTotal()
	{
		return m_total;
	}

};