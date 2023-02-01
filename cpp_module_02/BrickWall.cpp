#include "BrickWall.hpp"

// DEFAULT CONSTRUCTOR
BrickWall::BrickWall()
    : ATarget("Inconspicuous Red-brick Wall")
{
    return ;
}

// DESTRUCTOR
BrickWall::~BrickWall()
{
    return ;
}

// METHOD
ATarget* BrickWall::clone() const
{
    return (new BrickWall());
}