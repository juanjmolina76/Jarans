#include <iostream>

int main(){
    int numero,millar,centenas,decenas,unidades;
    std::cout<<"ingresa un nuemro\n";
    std::cin>>numero;//1563


    unidades=numero%10;//=3
    
    numero=numero/10;/*1563/10=156.3 */
    decenas=numero%10;//=6
    
    numero=numero/10;//156/10=15.6
    centenas=numero%10;//=5

    millar=numero/10;//15/10=1.5
    
    //std::cout<<millar<<"-"<<centenas<<"-"<<decenas<<"-"<<unidades<<"-";

switch (millar)
{
    case 1:std::cout<<"M";break;
    case 2:std::cout<<"MM";break;
    case 3:std::cout<<"MMM";break;
}
switch (centenas)
{
    case 1:std::cout<<"C";break;
    case 2:std::cout<<"CC";break;
    case 3:std::cout<<"CCC";break;
    case 4:std::cout<<"CD";break;
    case 5:std::cout<<"D";break;
    case 6:std::cout<<"DC";break;
    case 7:std::cout<<"DCC";break;
    case 8:std::cout<<"DCCC";break;
    case 9:std::cout<<"CM";break;
}
switch (decenas)
{
    case 1:std::cout<<"X";break;
    case 2:std::cout<<"XX";break;
    case 3:std::cout<<"XXX";break;
    case 4:std::cout<<"XL";break;
    case 5:std::cout<<"L";break;
    case 6:std::cout<<"LX";break;
    case 7:std::cout<<"LXX";break;
    case 8:std::cout<<"LXXX";break;
    case 9:std::cout<<"XC";break;
}
switch (unidades)
{
    case 1:std::cout<<"I";break;
    case 2:std::cout<<"II";break;
    case 3:std::cout<<"III";break;
    case 4:std::cout<<"IV";break;
    case 5:std::cout<<"V";break;
    case 6:std::cout<<"VI";break;
    case 7:std::cout<<"VII";break;
    case 8:std::cout<<"VIII";break;
    case 9:std::cout<<"IX";break;
} 
    system("pause");
    return 0;
}