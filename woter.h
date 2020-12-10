#ifndef WOTER_H
#define WOTER_H
#include "condimentdecorator.h"

class Woter : public CondimentDecorator{

public:
    Woter(Beverage*);
    virtual double cost();
    virtual QString getDescription();

};

#endif // WOTER_H
