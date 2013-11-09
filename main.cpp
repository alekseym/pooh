#include <stdio.h>
#include "engine.h"
#include "cs.h"
#include "thing.h"
#include "world.h"
int main()
{
  Engine e;
  e.On();
  e.Off();
  ControlSystem c;
  c.EngineOnCmd();
  c.EngineOffCmd();
  
  Thing *p;
  p = new Thing();
  p ->show();
  delete p;
  
}
