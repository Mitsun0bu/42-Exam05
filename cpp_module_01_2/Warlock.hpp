# pragma once

# include <iostream>

class Warlock
{
	private:
		
		// ATTRIBUTE
		std::string	_name;
		std::string	_title;

	public:

		// CONSTRUCTOR
		Warlock(std::string const & name, std::string const & title);
		
		// DESTRUCTOR
		~Warlock();

		// GETTERS
		std::string const &	getName() const;
		std::string const &	getTitle() const;

		// SETTER
		void		setTitle(std::string const & title);
		
		// METHOD
		void		introduce() const;
};
