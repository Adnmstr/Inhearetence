#ifndef TEEN_H
#define TEEN_H

#include "Person.h"

class Teen: public Person
{
public:
	Teen();
	void eat();
	void sleep();
	void breath();
	void whine();
	void spend();
};

#endif