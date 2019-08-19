//
//  AccountTest.cpp
//  PracticeC++
//
//  Created by Sadaf Najam on 2019-08-18.
//  Copyright © 2019 Sadaf Najam. All rights reserved.
//

#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account A1{"Jane The Virgin"};
    Account A2{"Rafael Solano"};
    
    cout << A1.getName() << endl;
    cout << A2.getName() << endl;
    
    return 0;
}
