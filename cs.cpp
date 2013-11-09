#include <stdio.h>
#include "cs.h"
ControlSystem::ControlSystem() {
  printf("ok\n");
}
ControlSystem::~ControlSystem(){
  printf("destruct\n");
}
void ControlSystem::EngineOnCmd(){
  e.SetSpeed(0);
  e.On();
  printf("Engine is on\n");
}
void ControlSystem::EngineOffCmd(){
  e.SetSpeed(0);
  e.Off();
  printf("Engine is off\n");
}