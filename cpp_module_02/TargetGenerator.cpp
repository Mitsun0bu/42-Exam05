#include "TargetGenerator.hpp"

// DEFAULT CONSTRUCTOR
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

void TargetGenerator::forgetTargetType(std::string const & targetName)
{
    std::map<std::string, ATarget*>::iterator it = _targetList.find(targetName);
	if (it != _targetList.end())
		delete (it->second);
    _targetList.erase(targetName);
}

ATarget* TargetGenerator::createTarget(std::string const & targetName)
{
    std::map<std::string, ATarget*>::iterator it = _targetList.find(targetName);
    if (it != _targetList.end())
        return (_targetList[targetName]);
    return (NULL);
}