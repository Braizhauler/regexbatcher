#ifndef REGEXRULE_H
#define REGEXRULE_H

#include <string>
#include "regexruletype.h"


class regexrule {
public:
	regexrule();
	~regexrule();

	void setType(RegexRuleType);
	RegexRuleType getType();

	void setRegexString(std::string searchString);
	void setRegexString(std::string searchString, std::string replaceString);
	std::string getRegexString();
private:
	RegexRuleType rule_type;
	std::string search_string;
	std::string replace_string;
};

#endif //REGEXRULE_H