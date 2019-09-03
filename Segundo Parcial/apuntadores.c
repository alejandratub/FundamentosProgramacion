#include <stdio.h>
#include <string>

int main()
{
    std::string nombre = "Juan";
    
    printf("La dirección de Juan es: %x \n", &nombre);
    
    std::string *direccionJuan;
    direccionJuan= &nombre;
    printf("La direccion de Juan es: %x \n", &direccionJuan);

    return 0;
}




