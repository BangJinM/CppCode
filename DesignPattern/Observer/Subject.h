#ifndef __DESIGNPATTERN_OBSERVER_SUBJECT_H__
#define __DESIGNPATTERN_OBSERVER_SUBJECT_H__

#include <list>
#include "Observer.h"

class Subject
{
public:
	std::list<Observer*> observers;
	virtual bool registerObserver(Observer* observer) = 0;
	virtual bool notifyObserver() = 0;
	virtual bool removeObserver(Observer* observer) = 0;

	Subject() {}
	virtual ~Subject() {}
};

#endif