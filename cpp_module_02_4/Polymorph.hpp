# pragma once

# include <iostream>
# include "ASpell.hpp"

class Polymorph
{
	public:
		
		// DEFAULT CONSTRUCTOR
			Polymorph();		

		// DESTRUCTOR
		virtual	~Polymorph();

		// METHOD
		ASpell*	clone() const;
};
