# include "SpellBook.hpp"

// CONSTRUCTOR
SpellBook::SpellBook()
{
	return ;
}

// DESTRUCTOR
SpellBook::~SpellBook()
{
	std::map<std::string, ASpell*>::iterator	head = _spellList.begin();
	std::map<std::string, ASpell*>::iterator	tail = _spellList.end();
	while(head != tail)
	{
		delete (head->second);
		++ head;
	}
	_spellList.clear(); 
}

// METHODS
void SpellBook::learnSpell(ASpell* spellPtr)
{
	if (spellPtr)
		_spellList.insert(std::pair<std::string, ASpell*>(spellPtr->getName(), spellPtr->clone()));
}

void SpellBook::forgetSpell(std::string const & spellName)
{
	std::map<std::string, ASpell*>::iterator it = _spellList.find(spellName);
	if (it != _spellList.end())
		delete (it->second);
	_spellList.erase(spellName);
}

ASpell* SpellBook::createSpell(std::string const & spellName)
{
	std::map<std::string, ASpell*>::iterator it = _spellList.find(spellName);
	if (it != _spellList.end())
		return (_spellList[spellName]);
	return (NULL);
}
