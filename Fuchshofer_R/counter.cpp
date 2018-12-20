/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
 #include "counter.h"

//Implemented everything

struct ImplemantionCounter
{
    enum directions type;
    int increment_value;
    int value;
    bool is_used;
};


struct ImplemantionCounter c1={UNDEFINED,0,0,false};
struct ImplemantionCounter c2={UNDEFINED,0,0,false};
struct ImplemantionCounter c3={UNDEFINED,0,0,false};
struct ImplemantionCounter c4={UNDEFINED,0,0,false};
struct ImplemantionCounter c5={UNDEFINED,0,0,false};
struct ImplemantionCounter c6={UNDEFINED,0,0,false};
struct ImplemantionCounter c7={UNDEFINED,0,0,false};
struct ImplemantionCounter c8={UNDEFINED,0,0,false};
static Counter counters_so_far[COUNTER_COUNT]={&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8};

 Counter new_counter(enum directions type)
 {
   for (int i = 0; i < COUNTER_COUNT; i++)
  {
    if (!counters_so_far[i]->is_used)
    {
      counters_so_far[i]->is_used=true;
      counters_so_far[i]->type=type;
      return counters_so_far[i];
    }
  }
  return 0;
 }
 void set_direction(Counter counter, enum directions type)
 {
   counter->type=type;
 }
 void set_increment_value(Counter counter, int value)
 {
   if(value>=0)
   {
     counter->increment_value=value;
   }
 }
 int get_increment_value(Counter counter)
 {
   return counter->increment_value;
 }
 bool set_value(Counter counter, int value)
 {
   if (counter->type==DOWN)
  {
    counter->value=value;
      return true;
  }
  return false;
 }
 int get_value(Counter counter)
 {
   return counter->value;
 }
 void increment(Counter counter)
 {
   if (counter->type==UP)
     {
       counter->value+=counter->increment_value;
     }
     else if (counter->type==DOWN)
     {
       counter->value-=counter->increment_value;
     }
 }
 directions get_direction(Counter counter)
 {
   return counter->type;
 }
 void init()
 {
   for (int i = 0; i < COUNTER_COUNT; i++)
  {
    counters_so_far[i]->is_used=false;
    counters_so_far[i]->increment_value=1;
    counters_so_far[i]->value=0;
    counters_so_far[i]->type=UNDEFINED;
  }


 }
