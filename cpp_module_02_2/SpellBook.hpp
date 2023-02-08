# pragma once

# include <map>
# include "ASpell.hpp"

class SpellBook
{
	private :

		// ATTRIBUTE
		std::map<std::string, ASpell*>	_spellList;

		// COPY CONSTRUCTOR
						SpellBook(SpellBook const & src);

		// ASSIGNMENT OPERATOR OVERLOAD
		SpellBook&		operator=(SpellBook const & src);

	public :

		// CONSTRUCTOR
						SpellBook();		

		// DESTRUCTOR
						~SpellBook();
		
		// METHODS
		void			learnSpell(ASpell* spellPtr);
		void			forgetSpell(std::string const & spellName);
		ASpell*			createSpell(std::string const & spellName);
};