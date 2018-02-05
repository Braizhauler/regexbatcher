#include "regexrule.h"



regexrule::regexrule() {
}


regexrule::~regexrule() {
}

void regexrule::setType(RegexRuleType RuleType) {
	rule_type = RuleType;
}

RegexRuleType regexrule::getType() {
	return rule_type;
}

void regexrule::setRegexString(std::string searchString) {
}

void regexrule::setRegexString(std::string searchString, std::string replaceString) {
}

std::string regexrule::getRegexString() {
	return std::string();
}
