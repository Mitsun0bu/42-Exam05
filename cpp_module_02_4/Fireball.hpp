# pragma once

# include <iostream>
# include "ASpell.hpp"

class Fireball: public ASpell
{
	public:
		
		// DEFAULT CONSTRUCTOR
			Fireball();		

		// DESTRUCTOR
		virtual	~Fireball();

		// METHOD
		ASpell*	clone() const;
};
