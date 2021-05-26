#pragma once
#include <string>
#include <stdio.h>

using namespace std;

class cGun
{
private:
    int m_bullet_count;
    string m_Type;

public:
    cGun(string Type)
    {
        this->m_Type = Type;
        this->m_bullet_count = 0;
    };
    ~cGun();

    void Add_Bullet_Num(int);
    bool Shut(int);
};
