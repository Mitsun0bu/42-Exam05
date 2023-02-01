#pragma once

#include "ASpell.hpp"

class Fwoosh: public ASpell
{
    public:

        // DEFAULT CONSTRUCTOR
        Fwoosh(void);

        // DESTRUCTOR
        ~Fwoosh(void);

        // METHOD
        virtual ASpell* clone(void) const;
};