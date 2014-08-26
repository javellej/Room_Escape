#ifndef TABLE_H
#define TABLE_H

#include <string>
#include "furniture.h"
using namespace std;

class Table: public Furniture
{
    public:
        Table( );
        Table( int, int);
        Table( string name);

        void picture_matrix( char **);
};

#endif /* TABLE_H */
