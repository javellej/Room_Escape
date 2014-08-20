#include <iostream>
#include <string>
#include "object.h"
using namespace std;

Object::Object( void)
{
    this->obj_id = 0;
    this->name = "";
}

Object::Object( int id, string name)
{
    this->obj_id = id;
    this->name = name;
}

void Object::pick( Items found_items)
{
    /* Adding the object to the found items list */
    found_items.add( this->obj_id);
    cout << "You found the following item: " << this->name << endl;
}
