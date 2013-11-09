#include <stdio.h>
#include "thing.h"

Thing::Thing () {

}

void Thing::show () {
    printf("%s,%f,%f,%f,%d", name, a,v,m,t);
}
