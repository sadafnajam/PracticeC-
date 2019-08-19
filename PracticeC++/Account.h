//
//  Account.h
//  PracticeC++
//
//  Created by Sadaf Najam on 2019-08-18.
//  Copyright © 2019 Sadaf Najam. All rights reserved.
//
// Account class demonstrating construtor

#ifndef Account_h
#define Account_h

using namespace std;

class Account {
private:
    string name;
    
public:
    explicit Account(string accountName):name{accountName}
    {
        
    }
    
    string getName() const
    {
        return name;
    }
    
    void setName(string accountName)
    {
        name = accountName;
    }
};

#endif /* Account_h */
