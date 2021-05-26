#pragma once

#include <string>
#include<stdio.h>
#include"gun.h"

using namespace std;

class cSoilder
{
private:
    string m_soilder_name;
    cGun *m_Ptr_Gun;


public:
    cSoilder(string);
    ~cSoilder();

    void AddGun(cGun *);
    void Add_Bullet_ToGun(int);
    bool Fire();
};
