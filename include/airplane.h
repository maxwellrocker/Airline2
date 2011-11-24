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

    int     seat;   //座位
    int     range;  //最大航程
    string  name;
};

#endif // AIRPLANE_H
