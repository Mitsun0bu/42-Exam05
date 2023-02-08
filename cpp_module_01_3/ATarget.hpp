# pragma once

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:

		// ATTRIBUTE
		std::string			_type;

	public:

		// DEFAULT CONSTRUCTOR
							ATarget();

		// CONSTRUCTOR
							ATarget(std::string const & type);

		// COPY CONSTRUCTOR
							ATarget(ATarget const & src);

		// ASSIGNMENT OPERATOR OVERLOAD
		ATarget&			operator=(ATarget const & src);

		// DESTRUCTOR
		virtual				~ATarget();

		// GETTER
		std::string const &	getType() const;

		// METHODS
		virtual ATarget*	clone() const = 0;
		void				getHitBySpell(ASpell const & spellRef) const;
};