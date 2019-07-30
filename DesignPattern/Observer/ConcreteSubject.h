#ifndef __DESIGNPATTERN_OBSERVER_CONCRETESUBJECT_H__
#define __DESIGNPATTERN_OBSERVER_CONCRETESUBJECT_H__

#include "Subject.h"
#include "Observer.h"
#include <list>

class ConcreteSubject:public Subject 
{
public:
	int num ;

	bool setNum(int num) {
		this->num = num;
		this->notifyObserver();
		return true;
	}
	int getNum(){
		return this->num;
	}


	bool registerObserver(Observer* observer) {
		observers.push_back(observer);
		return true;
	}
	bool notifyObserver() {
		for (auto o = observers.begin(); o != observers.end(); ++o)
		{
			(*o)->update(this->getNum());
		}
		return true;
	}
	bool removeObserver(Observer* observer) {
		observers.remove(observer);
		return true;
	}
};

#endif