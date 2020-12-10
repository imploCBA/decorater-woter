#include "whiskey.h"

Whiskey::Whiskey( Beverage *b) : CondimentDecorator (b)
{

}

double Whiskey::cost() {
    return 54.0 + beverage->cost();
}

QString Whiskey::getDescription() {
    return beverage->getDescription() + ", Whiskey";
}






