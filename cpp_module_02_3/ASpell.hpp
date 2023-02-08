#pragma once

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    private:
        
        // ATTRIBUTES 
        std::string         _name;
        std::string         _effects;

    public:

        // DEFAULT CONSTRUCTOR
                            ASpell();

        // CONSTRUCTOR
                            ASpell(std::string const & name, std::string const & effects);

        // COPY CONSTRUCTOR
                            ASpell(ASpell const & src);

        // ASSIGNMENT OPERATOR OVERLOAD
        ASpell&             operator=(ASpell const & src);

        // DESTRUCTOR
        virtual             ~ASpell();

        // GETTERS
        std::string const & getName() const;
        std::string const & getEffects() const;

        // METHODS
        void                launch(ATarget const & targetRef) const;
        virtual ASpell*     clone() const = 0;
};