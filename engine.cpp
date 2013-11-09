#include <stdio.h>
#include "engine.h"
Engine::Engine() {
  Speed = 0;
  Power = 0;
  IsOn = 0;
  printf("Speed\n");
  printf("Power\n");
  printf("IsOn\n");
}
Engine::~Engine(){
 printf("~Engine\n");
}
void Engine::On(){
  IsOn = 1;
}
void Engine::Off(){
  IsOn = 0;
}
void Engine::SetSpeed(int val){
  Speed = val;
}
int Engine::getOnState(){
  return IsOn;
}