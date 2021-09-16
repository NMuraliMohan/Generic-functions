#pragma once 
class Chikki
{
	int _price;
	int _barCodeNumber;
	
public:

	Chikki(int price, int barCodeNumber) : _price{ price }, _barCodeNumber{ barCodeNumber }
	{

	}
	friend std::ostream& operator<<(std::ostream& os, const Chikki& chikki)
	{
		
		os << chikki._price << '\n';
		return os;
	}

	/*int operator+(int const& secondChikki) {

		_price = _price + secondChikki;
		 
		return _price;
	}*/
	int GetPrice()
	{
		return _price;
	}


};
