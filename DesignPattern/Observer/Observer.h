#ifndef __DESIGNPATTERN_OBSERVER_OBSERVER_H__
#define __DESIGNPATTERN_OBSERVER_OBSERVER_H__

class Observer
{
public:
	virtual bool update(int num) = 0;
};

#endif