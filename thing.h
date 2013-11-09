#ifndef THING_H
#define THING_H
      
class Thing {
  char name[100];
  int t;
  float v;
  float m;
  float a;
public:
    Thing();
    void show();
};
#endif