#include "API.h"
#ifndef _CHASSIS_H_
#define _CHASSIS_H_


 void chassisSet(int left, int right){
motorSet(1, left);
motorSet(10, right);
 };
#endif
