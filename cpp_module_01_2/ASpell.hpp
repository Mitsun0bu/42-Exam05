# pragma once

# include <iostream>

class ASpell
{
	private:
		
		// ATTRIBUTE
		std::string		_name;
		std::string		_effects;

	public:

		// DEFAULT CONSTRUCTOR
					ASpell();

		// CONSTRUCTOR
					ASpell(std::string const & name, std::string const & effects);

		// COPY CONSTRUCTOR
					ASpell(ASpell const & src);
		
		// ASSIGNMENT OPERATOR OVERLOAD
		ASpell&			operator=(ASpell const & src);
	
		// DESTRUCTOR
					~ASpell();

		// GETTERS
		std::string const &	getName() const;
		std::string const &	getEffects() const;

		// METHOD
		virtual ASpell*		clone() const = 0;
		void			launch(ATarget const & targetRef) const;
};
