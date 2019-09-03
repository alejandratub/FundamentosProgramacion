#include<stdio.h>

char esPrimo(int num)
{
    int contDivisores = 0; 
    
    for(int i = num; i >0; i=i-1)
    {
        if(num%i == 0)
        {
            contDivisores = contDivisores + 1;
        }
    }
    
    if(contDivisores == 2)
    {
        printf("sí es primo");
        return 's';
    }
    else
    {
        printf("no es primo");
        return 'n';
    }
}
    

 int contadorPrimos( )
 {
     int contador=0;
     for(int i==3; int i<1000; i=i+1)
     {
         if (esPrimo(i)=='s')
         contador=contador+1;
         return contador;
     }

    

int pares(int n){
    int cache=0;
    for (int i =2; i<=n; i=i+1)
    {
        if (i%2 == 0){
            cache=cache+1
        }
    }
   
    
}
 string coche(string marca, string frenos, string potencia, string color)
{
    if(marca==Chrysler){
        if(frenos=="Tambor"){
            if(potencia=="alta"){
                if(color=="rojo"){
                    printf("El coche es regular",coche)
                
                }
            }
        }
    }
            if(marca=="Chrysler"){
              if(frenos=="Disco"){
                if(potencia=="media"){
                    if(color=="rojo"){
                        printf("El coche es bueno",coche)
                }
            }
        }
    }
    
}
    if(marca=="Honda"){
        if(frenos=="Tambor"){
            if(potencia=="alta"){
                if(color=="azul"){
                    printf("El coche es bueno",coche)
                }
            }
        }
    }
    
}
if(marca=="Chrysler"){
        if(frenos=="Tambor"){
            if(potencia=="media"){
                if(color=="rosa"){
                    printf("El coche es regular",coche)
                }
            }
        }
    }
    
}
if(marca=="Honda"){
        if(frenos=="Tambor"){
            if(potencia=="media"){
                if(color=="rosa"){
                    printf("El coche es bueno",coche)
                }
            }
        }
    }
    
}
if(marca=="Honda"){
        if(frenos=="Disco"){
            if(potencia=="alto"){
                if(color=="azul"){
                    printf("El coche es bueno",coche)
                }
            }
        }
    }
    
}
if(marca=="Chrysler"){
        if(frenos=="Disco"){
            if(potencia=="alto"){
                if(color=="azul"){
                    printf("El coche es regular",coche)
                }
            }
        }
    }
    
}
if(marca=="Honda"){
        if(frenos=="Disco"){
            if(potencia=="medio"){
                if(color=="rojo"){
                    printf("El coche es bueno",coche)
                }
            }
        }
    }
    
}
}
int main()
{
    coche("Chrysler","Disco","medio","rojo")
     printf("\n el numero %c", esPrimo);
      printf("Hay %i primos entre el 3 y el 1000",contador);
       printf("Hay %i pares  ",cache);
       pares(4);
     
    
    
    return 1;

}