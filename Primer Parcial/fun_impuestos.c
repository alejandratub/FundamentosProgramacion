
int calculoImpuestos(int precioProducto)

int precioFinal;
printf("ingresa el precio del producto: ");
scanf ("%d", &precioProducto);

    if(precioProducto<=20000){
        printf("Este producto no paga impuestos");
    }
    else if((precioProducto>20000)&&(precioProducto<=40000)){
        precioFinal=((precioProducto-20000)*.3)+precioProducto;
       
         else if((prod>40000)&&(prod<=80000)){
             precioFinal=((precioProducto-40000)*.4)+precioProducto+6000;
    }
    else if(prod>80000){
        precioFInal=((precioProducto-8000)*.5)+precioProducto+8000+6000;
       
        printf("El precio final de este producto es: %i ",precioFinal);
        }
}
