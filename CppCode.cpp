#include <iostream>

#include "DesignPattern/Observer/Subject.h"
#include "DesignPattern/Observer/ConcreteObserver.h"
#include "DesignPattern/Observer/ConcreteSubject.h"

int main()
{
	ConcreteSubject sub = ConcreteSubject();
	ConcreteObserver obs = ConcreteObserver(1);
	ConcreteObserver obs1 = ConcreteObserver(2);
	sub.registerObserver(&obs);
	sub.registerObserver(&obs1);
	sub.setNum(2);
	sub.removeObserver(&obs);
	sub.setNum(3);
}