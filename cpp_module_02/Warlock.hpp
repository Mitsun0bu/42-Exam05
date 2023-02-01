#pragma once

# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock
{
    private:

        // ATTRIBUTES
        std::string         _name;
        std::string         _title;
        SpellBook           _spellBook;

        // DEFAULT CONSTRUCTOR
                            Warlock();

        // COPY CONSTRUCTOR
                            Warlock(Warlock const &other);

        // ASSIGNMENT OPERATOR OVERLOAD
        Warlock&            operator=(Warlock const &other);

    public:

        // CONSTRUCTOR
                            Warlock(std::string const & name, std::string const & title);
        // DESTRUCTOR
                            ~Warlock();

        // GETTERS
        std::string const & getName() const;
        std::string const & getTitle() const;

        // SETTER
        void                setTitle(std::string const & title);

        // METHODS
        void                introduce() const;
        void                learnSpell(ASpell *spellPtr);
        void                forgetSpell(std::string spellName);
        void                launchSpell(std::string spellName, ATarget const & targetRef);
};