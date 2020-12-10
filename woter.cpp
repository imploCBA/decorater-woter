#include "woter.h"

Mocha::Mocha(Beverage *b) : CondimentDecorator (b) {

}


double Mocha::cost() {
    return 10.0 + beverage->cost();
}


QString Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}
