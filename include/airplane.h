#ifndef AIRPLANE_H
#define AIRPLANE_H

#include<stdio.h>
#include<string.h>
#include<string>
#include<limits.h>

using namespace std;
class airplane
{
public:
    airplane();
    virtual ~airplane();

    void setSeat(int _seat);
    void setRange(int _range);
    void setName(string _name);

    int     getSeat();
    int     getRange();
    string  getName();

protected:

private:

    int     seat;   //�y��
    int     range;  //�̤j��{
    string  name;
};

#endif // AIRPLANE_H
