# pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	private:
	
		// ATTRIBUTES
		std::string			_name;
		std::string			_title;
		std::map<std::string, ASpell*>	_spellList;

		// DEFAULT CONSTRUCTOR
							Warlock();		

		// COPY CONSTRUCTOR
							Warlock(Warlock const & src);			

		// ASSIGNMENT OPERATOR OVERLOAD
		Warlock&			operator=(Warlock const & src);

	public:
		
		// CONSTRUCTOR
							Warlock(std::string const & name, std::string const & title);

		// DESTRUCTOR
							~Warlock();

		// GETTERS
		std::string const &	getName() const;
		std::string const &	getTitle() const;

		// SETTERS
		void				setTitle(std::string const & title);

		// METHOD
		void				introduce() const;
		void				learnSpell(ASpell* spellPtr);
		void				forgetSpell(std::string spellName);
		void				launchSpell(std::string spellName, ATarget const & targetRef);
};