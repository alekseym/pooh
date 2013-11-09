#ifndef world_H
#define world_H

#include "thing.h"

class World {
    Thing * things [1000];
    int t;
    float g;
    int cnt;
public:
    World();
    ~World();

    void addThing(Thing *p);
    void showAll();
    void showThing(int icnt);
};

#endif