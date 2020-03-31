#include <iostream>
#include <vector>
using namespace std;

class Objecto{
    public:
    int peso;
    int beneficio;
    Objecto();
    Objecto(int peso, int beneficio);
};
class Mochila{
    public: 
    int pesoM;
    int Beneficio=0;
    vector<Objecto> Objetos;
    Mochila();
    Mochila(int PesoM);
    void CompararCB(int objc, Objecto Objetos[]);
};
Objecto::Objecto(int peso, int beneficio){
    this->peso=peso;
    this->beneficio=beneficio;
};
Mochila::Mochila(int PesoM){
this->pesoM=PesoM;
};
void Mochila::CompararCB(int objcantidad, Objecto Objetos[]){
int peso_actual=0;
for (int i=0; i <objcantidad; i++)
{
    if ((Objetos[i].peso<this->pesoM) && (peso_actual<=this->pesoM) && (peso_actual+Objetos[i].peso<pesoM))
    {
        this->Objetos.push_back(Objetos[i]);
        peso_actual+=Objetos[i].peso;
        this->Beneficio+=Objetos[i].beneficio;
        cout<<"Es parte de la solución actual"<<endl;
    }
}
cout<<"La mochila termino con "<<peso_actual<<" peso y un benficio de "<<this->Beneficio<<endl;
};
int main(){
    Objecto calculadora(1, 3);
    Objecto termo(3, 2);
    Objecto computadora(4, 5);
    Mochila mo1(5);
    Objecto Objectos[]={calculadora, termo, computadora};
    mo1.CompararCB(3, Objectos);
    return 0;
}
