#include "generic.h"
#include "chikki.h"
#include <iostream>


int main()
{
	Accum<int> price(20);

	price += 30;

	price += 40;

	Accum<std::string> names("AGK");

		names += "SRI";

		names += "HARSHA";

		Chikki chikki_1(20, 12345);
		Chikki chikki_2(30, 12467);

		Accum<Chikki> chikkies(0);

		chikkies += chikki_2;
		std::cout << "The total rate is " << chikkies.GetTotal() << '\n';


	std::cout << "The total price is " << price.GetTotal() << '\n';

	std::cout << "The name is " << names.GetTotal() << '\n';


	Chikki chikki3(0, 0);
	Accum<Chikki> chikkis(0);
	Chikki chikki4(20, 40);
	
	chikkis += chikki4;

	std::cout << "the total chikki price is " << chikkis.GetTotal() << '\n';

}