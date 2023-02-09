# pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class TargetGenerator
{
	private:
	
		// ATTRIBUTES
		std::map<std::string, ATarget*>	_targetList;

		// COPY CONSTRUCTOR
						TargetGenerator(TargetGenerator const & src);			

		// ASSIGNMENT OPERATOR OVERLOAD
		TargetGenerator&		operator=(TargetGenerator const & src);

	public:
		
		// DEFAULT CONSTRUCTOR
						TargetGenerator();

		// DESTRUCTOR
						~TargetGenerator();

		// METHOD
		void				learnTargetType(ATarget* targetPtr);
		void				forgetTargetType(std::string const & targetType);
		ATarget*			createTarget(std::string const & targetType);
};
