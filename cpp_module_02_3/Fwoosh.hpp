#pragma once

#include "ASpell.hpp"

class Fwoosh: public ASpell
{
    public:

        // DEFAULT CONSTRUCTOR
        Fwoosh();

        // DESTRUCTOR
        ~Fwoosh();

        // METHOD
        virtual ASpell* clone() const;
};