#pragma once

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:

        // ATTRIBUTES
        std::string         _type;
    
    public:

        // DEFAULT CONSTRUCTOR
                            ATarget();

        // CONSTRUCTOR
                            ATarget(std::string const & type);

        // COPY CONSTRUCTOR
                            ATarget(ATarget const & other);

        // ASSIGNMENT OPERATOR OVERLOAD
        ATarget&            operator=(ATarget const & other);

        // DESTRUCTOR
        virtual             ~ATarget();

        // GETTER
        std::string const & getType() const;

        // METHODS
        void                getHitBySpell(ASpell const & spellRef) const;
        virtual ATarget*    clone() const = 0;
};