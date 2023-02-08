#pragma once

# include "ATarget.hpp"

class BrickWall: public ATarget
{
    public:

        // DEFAULT CONSTRUCTOR
        BrickWall();

        // DESTRUCTOR
        ~BrickWall();

        // METHOD
        virtual ATarget* clone() const;
};
