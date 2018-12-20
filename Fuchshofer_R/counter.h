/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include "stdio.h"
#ifndef ___COUNTER_H
#define ___COUNTER_

#define COUNTER_COUNT 8

enum directions{
  UP,DOWN,UNDEFINED
};

//ImplemantionCounter added
struct ImplemantionCounter;
//

typedef ImplemantionCounter* Counter;

Counter new_counter(enum directions);
 void set_direction(Counter counter, enum directions type);
void set_increment_value(Counter counter, int value);
int get_increment_value(Counter counter);
bool set_value(Counter counter, int value);
int get_value(Counter counter);
void increment(Counter counter);
directions get_direction(Counter counter);
void init();

#endif
