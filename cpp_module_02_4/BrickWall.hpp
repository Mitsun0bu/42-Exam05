# pragma once

# include <iostream>
# include "ATarget.hpp"

class BrickWall: public ATarget
{
	public:
		
		// DEFAULT CONSTRUCTOR
					BrickWall();		

		// DESTRUCTOR
		virtual		~BrickWall();

		// METHOD
		ATarget*	clone() const;
};
