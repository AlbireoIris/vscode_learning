#pragma once

#include <string>
#include<stdio.h>
#include"gun.h"

using namespace std;

class cSoilder
{
private:
    string m_soilder_name;
    Gun *m_Ptr_Gun;


public:
    cSoilder(s);
    cSoilder();

    void AddGun(Gun *in_gun);
    void Add_Bullet_ToGun(int);
    bool Fire();

};
