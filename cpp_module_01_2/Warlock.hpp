# pragma once

# include <iostream>

class Warlock
{
	private:
		
		// ATTRIBUTE
		std::string	_name;
		std::string	_title;
		std::map<std::string, ASpell*>	_spellList;

	public:

		// CONSTRUCTOR
					Warlock(std::string const & name, std::string const & title);
		
		// DESTRUCTOR
					~Warlock();

		// GETTERS
		std::string const &	getName() const;
		std::string const &	getTitle() const;

		// SETTER
		void			setTitle(std::string const & title);
		
		// METHOD
		void			introduce() const;
		void			learnSpell(ASpell* spellPtr);
		void			forgetSpell(std::string spellName);
		void			launchSpell(std::string spellName, ATarget const & targetRef);
};
