# pragma once

# include <iostream>
# include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
		
		// DEFAULT CONSTRUCTOR
				Dummy();		

		// DESTRUCTOR
		virtual		~Dummy();

		// METHOD
		ATarget*	clone() const;
};
