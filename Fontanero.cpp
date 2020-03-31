#include <iostream>
#include <algorithm>

using namespace std;

class Cliente{
    public:
    int tRep;
    int satisfaccion;

    Cliente();
    Cliente(int beneficio);
};
Cliente::Cliente(int tRep){
    this->tRep=tRep;
};
 void ordenar(Cliente listaDeC[], int sizeDeLista){
     int swaps=0;
     while(swaps!=0){
        swaps=0;
        for (int i = 0; i < sizeDeLista-1; i++)
        {
            if (listaDeC[i].tRep>listaDeC[i+1].tRep){
                Cliente t=listaDeC[i];
                listaDeC[i]=listaDeC[i+1];
                listaDeC[i+1]=t;
                swaps++;
            }
        }
     }
 };
 void OrdenDeAtencion(Cliente listaDeC[], int sizeDeLista){
    int tTotal=0;
    int satisfaccionT=0;
    ordenar(listaDeC, sizeDeLista);
    for (size_t i = 0; i < sizeDeLista; i++)
    {
        tTotal+=listaDeC[i].tRep;
        cout<<tTotal<<endl;
        listaDeC[i].satisfaccion=listaDeC[i].tRep/tTotal;
        satisfaccionT+=listaDeC[i].satisfaccion;
        satisfaccionT=satisfaccionT/sizeDeLista;
    }
    cout<<"El tiempo total de reparación es de: "<<tTotal<<" con una satisfaccion promedio de: "<<satisfaccionT<<endl;
};
int main(){
    Cliente a(2);
    Cliente b(3);
    Cliente c(1);
    Cliente d(6);
    Cliente Clientes[]={a,b,c,d};
    OrdenDeAtencion(Clientes, 4);
    return 0;
}
