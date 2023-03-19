#include <iostream>
main(){
    int NomAlum,n,nota;
    char materia[]={'Mat','Len'};
    
    do
    {
        std::cout<<"Ingrese la cantidad de alumnos: ";
        std::cin>>n;
        }
        while ((n < 1 ) || (n>40));
        for (int i = 0; i < n; i++)
        {
            std::cout<<"Ingrese el nombre del Alumno:"<<i+1<<" : ";
            std::cin>>NomAlum;
        }
    for (size_t i = 0; i < n; i++)
    {
        std::cout<<"Nota del alumno"<<i+1<<" : "<<"En"<<materia[0]<<" : ";
        std::cin>>nota;
    }

    for (size_t i = 0; i < n; i++)
    {
        std::cout<<"Nota del alumno"<<i+1<<" : "<<"En"<<materia[1]<<" : ";
        std::cin>>nota;
    }
        
        
    
    

    system ("pause");
    return 0;
}