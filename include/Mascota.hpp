class Mascota
{
private:
    int Felicidad;// Entero el cual es un Objeto
    int Energia;
public:
    Mascota() {}//Constructor solo recibe
    ~Mascota() {}//Destructor solo cuando la mascota muere
    void Comer()
        {
            this->Energia += 1;//Cada vez que come la mascota se le sube la energia
        }
    int LeerEnergia()
        {
         return this->Energia;
        }    
};