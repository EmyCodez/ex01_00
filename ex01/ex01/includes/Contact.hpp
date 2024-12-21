# ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

typedef std::string str;

class Contact
{
private:
    str _firstName;
    str _lastName;
    str _nickName;
    str _phone;
    str _secret;
        
public:
    Contact(void);
    ~Contact();

    //setters
    void setFirstName(str fName);
    void setLastName(str lName);
    void setNickName(str nName);
    void setPhone(str phone);
    void setSecret(str secret);

    //getters
    str getFirstName(void) const;
    str getLastName(void) const;
    str getNickName(void)const;
    str getPhoneNumber(void)const;
    str getSecret(void)const;
};

# endif
