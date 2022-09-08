#include <iostream>

constexpr int N_ELEMENTS = 100; //felesleges a constexpr, nem kell hogy ez az érték futásidőben változzon, lehet simán const

int main()
{
    int *b = new int[NELEMENTS]; //Helytelen hivatkozás, helyes: N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //cout stringet vár, helyes használat: "1-100 ertekek duplazasa", sor nincs lezárva ;-vel
    for (int i = 0;) //hiányos feltétel helyesen: for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2; //0ról indul az indexelés de az első elem '2' kell hogy legyen, ezért a sor helyesen b[i] = (i+1) * 2;
    }
    for (int i = 0; i; i++) //hiányos feltétel helyesen: for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek:"//így nincs kiírva semmi, helyesen így néz ki std::cout << "Ertek: " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs inicializálva a változo (=0)
    for (int i = 0; i < N_ELEMENTS, i++)//ez már majdnem helyes, a ','-t cserélni ';'-re
    {
        atlag += b[i]//itt is egy ';' hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
