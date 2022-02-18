#include "Person.h"
#include "Baby.h"
#include "Teen.h"
#include <iostream>

using namespace std;

int main()
{
	Person p;
	p.eat();
	p.sleep();
	p.breath();
	Baby b;
	b.eat();
	b.sleep();
	b.breath();
	b.cry();
	b.crawl();
	Teen t;
	t.eat();
	t.sleep();
	t.breath();
	t.whine();
	t.spend();
}