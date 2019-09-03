import math
import numpy as np

#------------------FORMULAS TEORIA DE COLAS----------------------
def Po( m, lamda, miu): #Probabilidad de que haya 0 clientes en el sistema
    p1 = 0
    for n in range (m):
        p1 += (( 1 / math.factorial(n)) *(math.pow((lamda / miu), n)))
    p2 = ((1/math.factorial(m))*(math.pow((lamda / miu),m) * ((m*miu)/((m*miu)-lamda))))

    result=  1/(p1+p2)

    print(result)
    return result

def L( m, lamda, miu): #numero promedio de clientes en el sistema
    parte1 = ((lamda*miu)*(math.pow((lamda/miu),m)) )/ (math.factorial(m-1))*(math.pow(((m*miu)-lamda),2))
    parte2 = Po(m,lamda,miu)
    parte3 = lamda/miu

    result = (parte1*parte2) + parte3
    print("L")
    print (result)
    return result

def W( m,lamda, miu): #tiempo promedio que una unidad pasa en el sistema 
    parte1= 0
    parte2= 0
    parte3= 0
    parte1 = (miu*(math.pow((lamda/miu), m)))  / (math.factorial((m-1))*(math.pow(((m*miu)-lamda),2)))
    parte2 = Po(m,lamda,miu)
    parte3 = 1/miu

    result =  (parte1 * parte2) + parte3
    print (result)
    return result

def Lq(m,lamda,miu): #numero promedio de clientes en la cola
    
    result =  ( L(m,lamda,miu) - (lamda/miu))
    print ("Lq")
    print (result)
    return result

def Wq(m,lamda,miu): #tiempo promedio de unidades que estan en la cola esperando servicio

    result =  (W(m,lamda,miu) - (1/miu))
    print ("wq")
    print (result)
    return result
    
def p(m,lamda,miu): #utilization rate
    result =  (lamda / (m * miu))
    print("p")
    print(result)
    return result

#lambda = arrival rate
#miu = service rate
#m = numero de colas (cajas)


#---------------------MARKOV----------------
def problema10():
    mat = np.matrix([
        [0.70,0.10,0.20],
        [0.05,0.85,0.10],
        [0.05,0.05,0.90]
        ])
    vec = np.matrix([1/3,1/3,1/3]) #market share
   # resultado = np.dot(mat,vec)
    print("markov")
    print (np.dot(vec,mat))




def problema1Colas(lamda,miu):
    time = 60/miu #Para saber cuantos atiende en un minuto
    result =  math.pow(lamda/time,3)
    print("Po")
    Po(1,4,time)
    print (result)
    Wq(1,4,time)
    Lq(1,4,time)
    L(1,4,time)
    p(1,24,30)
    return result

def main ():
    problema1Colas(4,12)
    problema10()
if __name__ == "__main__":
	main()