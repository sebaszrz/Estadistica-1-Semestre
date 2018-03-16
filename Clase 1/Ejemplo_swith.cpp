#include <iostream>
using namespace std;
int main(){
    int numero;
    char reinicia;
    reinicia='c';
while(reinicia=='c'||reinicia=='C'){
cout<<"escoja su paquete de tv entre estas 3 opciones 1,2 o 3";

cin>>numero;

switch (numero) {
    case 1: 
    cout<<"este paquete incluye\n canales nacionales\n canales documentales\n fox sports " <<endl;
break;
case 2:
    cout<<"este paquete incluye\n canales nacionales\n canales documentales\n fox sports\n fox sports 2\n canales hd\n "<<endl;
break;
case 3:
    cout<<"este paquete incluye\n canales nacionales\n canales documentales\n fox sports\n fox sports 2\n canales hd\n hbo\n venuz "<<endl;
break;
default:
cout<<"este paquete no esta disponible";
}
cout<<"ingrese c para continuar";
cin>>reinicia;
}

}
    
    







    
    
    
    
    
    
    
    
    
    
   
