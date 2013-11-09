#include <stdio.h>
#include <stdlib.h>
#include "world.h"
#include "thing.h"
World::World () {
  int i;
  for (i=0; i<100; i++)
    things[i] = NULL;
  g = 9.8 ;
  t = 0;
  cnt = 0;
  printf("World created\n");
}

World::~World () {
}

void World::addThing(Thing *p){
   things[cnt] = p;
   cnt = cnt +1;
}
void World::showAll () {
    int i;
    for (i=0;i<cnt;i++)
      things [i]->show();
}

void World::showThing(int icnt) {
  if (things[icnt]!=NULL)
    things[icnt]->show();
  else
    printf("No such thing, %d \n",icnt);
}