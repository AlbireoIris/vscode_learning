#pragma once
#include<string>

using namespace std;

class Gun
{
private:
    int m_bullet_count;
    string m_Type;
public:
    Gun(string Type){
        this->m_Type=Type;
        this->m_bullet_count=0;
    };
    ~Gun();

    void Add_bullet_
};
