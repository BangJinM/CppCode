#include <iostream>

#include "Subject.h"
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"

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