#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include "items.h"
using namespace std;

class Object
{
    public:

        int obj_id;
        string name;

        Object( void);
        Object( int id, string name);

    private:
        
        void pick( Items);
};

#endif /* OBJECT_H */
