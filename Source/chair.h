#ifndef CHAIR_H
#define CHAIR_H

#include <string>
#include "furniture.h"
using namespace std;

class Chair: public Furniture
{
    public:
        Chair( );
        Chair( string name);

        void picture_matrix( char **);
};

#endif /* CHAIR_H */
