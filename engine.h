#ifndef engine_h
#define engine_h
class Engine {
  public:
   int Speed;
   float Power;
   int IsOn;
  public:
   Engine();
   ~Engine();
   void SetSpeed();
   void On();
   void Off();
   void SetSpeed(int val);
   int getOnState();
};
#endif