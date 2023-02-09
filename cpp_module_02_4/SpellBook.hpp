# pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class SpellBook
{
	private:
	
		// ATTRIBUTES
		std::map<std::string, ASpell*>	_spellList;

		// COPY CONSTRUCTOR
						SpellBook(SpellBook const & src);			

		// ASSIGNMENT OPERATOR OVERLOAD
		SpellBook&			operator=(SpellBook const & src);

	public:
		
		// DEFAULT CONSTRUCTOR
						SpellBook();

		// DESTRUCTOR
						~SpellBook();

		// METHOD
		void				learnSpell(ASpell* spellPtr);
		void				forgetSpell(std::string const & spellName);
		ASpell*				createSpell(std::string const & spellName);
};
