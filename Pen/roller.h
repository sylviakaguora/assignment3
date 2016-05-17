#ifndef ROLLER_H
#define ROLLER_H
#include <iostream>
#include <string>
#include "pen.h"
class RollerBallPen : public Pen{

 public:

 RollerBallPen(std::string pen_name)

 : Pen(pen_name) {}
RollerBallPen() : Pen(std::string("RollerBallPen")){}
 
 virtual std::string drawLine();

 virtual std::string drawCircle();

};

#endif