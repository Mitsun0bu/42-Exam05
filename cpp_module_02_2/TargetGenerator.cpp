# include "TargetGenerator.hpp"

// CONSTRUCTOR
TargetGenerator::TargetGenerator()
{
	return ;
}
		
// DESTRUCTOR
TargetGenerator::~TargetGenerator()
{
	return ;
}	

// METHODS
void TargetGenerator::learnTargetType(ATarget* targetPtr)
{
	if (targetPtr)
		_targetList.insert(std::pair<std::string, ATarget*>(targetPtr->getType(), targetPtr->clone()));
}

void TargetGenerator::forgetTargetType(std::string const & targetType)
{
	std::map<std::string, ATarget*>::iterator it = _targetList.find(targetType);
	if (it != _targetList.end())
		delete (it->second);
	_targetList.erase(targetType);
}

ATarget* TargetGenerator::createTarget(std::string const & targetType)
{
	std::map<std::string, ATarget*>::iterator it = _targetList.find(targetType);
	if (it != _targetList.end())
		return (_targetList[targetType]->clone());
	return (NULL);
}