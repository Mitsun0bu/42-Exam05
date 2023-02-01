#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:

        // ATTRIBUTES
        std::map<std::string, ASpell*> _spellList;

        // COPY CONSTRUCTOR
                    SpellBook(SpellBook const & src);

        // ASSIGNMENT OPERATOR OVERLOAD
        SpellBook&  operator=(SpellBook const &src);

    public:

        // DEFAULT CONSTRUCTOR
                    SpellBook();
    
        // DESTRUCTOR
                    ~SpellBook();

        // METHODS
        void        learnSpell(ASpell* spellPtr);
        void        forgetSpell(std::string const & spellName);
        ASpell*     createSpell(std::string const & spellName);

};