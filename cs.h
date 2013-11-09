#ifndef cs_h
#define cs_h
#include "engine.h"
class ControlSystem{
  Engine e;
public:
  ControlSystem();
  ~ControlSystem();
  void EngineOnCmd();
  void EngineOffCmd();
};
#endif