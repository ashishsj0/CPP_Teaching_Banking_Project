/*
 * Address.h
 *
 *  Created on: 20-May-2020
 *      Author: ashishsharma
 */


#include<string>

class Address {

	int houseNumber;

	public:
	void set_house(int newHouse) {
		houseNumber = newHouse;
	}

	int get_house() {
		return houseNumber;
	}

};

