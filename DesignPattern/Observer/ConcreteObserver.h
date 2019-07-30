#ifndef __DESIGNPATTERN_OBSERVER_CONCRETEOBSERVER_H__
#define __DESIGNPATTERN_OBSERVER_CONCRETEOBSERVER_H__
#include <iostream>
#include "Observer.h"
#include <string>

class ConcreteObserver:public Observer
{
public:
	int _name;

	ConcreteObserver(int name) :_name(name) {}

	bool update(int num) {
		printf("%d ==                                        %d\n", _name, num);
		return true;
	}
};

#endif