#pragma once

# include "ATarget.hpp"

class Dummy: public ATarget
{
    public:

        // DEFAULT CONSTRUCTOR
        Dummy();

        // DESTRUCTOR
        ~Dummy();

        // METHOD
        virtual ATarget* clone() const;
};