#include "../include/airplane.h"

airplane::airplane()
{
    //ctor
    name = "";
    seat = 0;
    range = 0;
}

airplane::~airplane()
{
    //dtor
}

void airplane::setSeat(int _seat)
{
    seat = _seat;
    return;
}

void airplane::setRange(int _range)
{
    range = _range;
    return;
}

void airplane::setName(string _name)
{
    name = _name;
    return;
}


int airplane::getSeat()
{
    return seat;
}

int airplane::getRange()
{
    return range;
}

string airplane::getName()
{
    return name;
}

