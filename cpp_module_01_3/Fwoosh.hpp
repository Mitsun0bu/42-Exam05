# pragma once

# include <iostream>
# include "ASpell.hpp"

class Fwoosh: public ASpell
{
	public :

		// DEFAULT CONSTRUCTOR
							Fwoosh();

		// DESTRUCTOR
		virtual             ~Fwoosh();

		// METHOD
		virtual ASpell*		clone() const;
};