#ifndef BABY_H
#define BABY_H

#include "Person.h"

class Baby : public Person
{
public:
	Baby();
	void eat();
	void sleep();
	void breath();
	void cry();
	void crawl();
};

#endif