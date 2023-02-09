# pragma once

# include <iostream>
# include "ASpell.hpp"

class Fireball
{
	public:
		
		// DEFAULT CONSTRUCTOR
			Fireball();		

		// DESTRUCTOR
		virtual	~Fireball();

		// METHOD
		ASpell*	clone() const;
};
