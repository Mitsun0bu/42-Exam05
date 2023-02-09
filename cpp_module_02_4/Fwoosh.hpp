# pragma once

# include <iostream>
# include "ASpell.hpp"

class Fwoosh
{
	public:
		
		// DEFAULT CONSTRUCTOR
			Fwoosh();		

		// DESTRUCTOR
		virtual	~Fwoosh();

		// METHOD
		ASpell*	clone() const;
};
