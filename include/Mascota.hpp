#pragma once
#include <Alimento.hpp>
class Mascota
{
private:
    int Felicidad;// Entero el cual es un Objeto
    int Energia;
public:
    Mascota() {
        this->Energia = 0;
    }//Constructor solo recibe
    ~Mascota() {}//Destructor solo cuando la mascota muere
    void Comer(Alimento alimento)
        {
            this->Energia += alimento.ExtraerEnergia();//Cada vez que come la mascota se le sube la energia
        }
    int LeerEnergia()
        {
         return this->Energia;
        }    
};