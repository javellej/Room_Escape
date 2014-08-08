#include "furniture.h"

Furniture::Furniture( )
{
}

string Furniture::get_name( )
{
    return this->name;
}

Object Furniture::look_over( )
{
    return this->over;
}

Object Furniture::look_under( )
{
    return this->under;
}
