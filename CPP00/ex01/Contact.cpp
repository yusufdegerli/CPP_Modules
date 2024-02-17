#include "Contact.hpp"

/*------------------------------Set--------------------------*/
void Contact::setDarkestSecret(std::string ds){ this->darkestsecret = ds; }
void Contact::setFirstName(std::string fName){ this->firstname = fName; }
void Contact::setLastName(std::string ln){ this->lastname = ln; }
void Contact::setNickName(std::string nn){ this->nickname = nn; }
void Contact::setPhoneNumber(std::string pn){ this->phonenumber = pn; }

/*------------------------------Get--------------------------*/
std::string Contact::getDarkestSecret(){ return this->darkestsecret; }
std::string Contact::getNickName(){ return this->nickname; }
std::string Contact::getFirstName(){ return this->firstname; }
std::string Contact::getPhoneNumber(){ return this->phonenumber; }
std::string Contact::getLastName(){ return this->lastname; }
