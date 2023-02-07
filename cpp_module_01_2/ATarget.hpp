#pragma once

#include <iostream>
#include "ASpell.hpp"

class Spell;

class ATarget
{
	private:

		// ATTRIBUTE
		std::string		_type;

	public:
		
		// DEFAULT CONSTRUCTOR
					ATarget();

		// CONSTRUCTOR
					ATarget(std::string const & type);

		// COPY CONSTRUCTOR
					ATarget(ATarget const & src);

		// ASSIGNMENT OPERATOR OVERLOAD
		ATarget&		operator=(ATarget const & src);					

		// DESTRUCTOR
					~ATarget();

		// GETTER
		std::string const &	getType() const;

		// METHOD
		void			getHitBySpell(ASpell const & spellRef) const;
		virtual ATarget*	clone()	const = 0;
};
		
