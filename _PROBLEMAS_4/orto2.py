import numpy as np
import fractions as frac

def divideForScalar(vec1, scalar):
    vec = 1

def multiVec(vec1,vec2):
    aux = np.array(vec2)
    aux2 = np.transpose(aux)

    return np.dot(vec1,aux2)
    
u1 = [1,-1,-1] 
u2 = [0,3,3]
u3 = [3,2,4]


#para u1
v1 = u1
print("Vector v1:")
for i in v1:
    print(i)


#para u2
aux = (multiVec(v1,u2))//(multiVec(v1,v1))
proy_v1_u2 = np.dot(v1,aux)
v2 = u2 - proy_v1_u2
print("\nVector v2:")
for i in v2:
    print(i)


#para u3
aux = (multiVec(v1,u3))//(multiVec(v1,v1))
proy_v1_u3 = np.dot(v1,aux)

aux = (multiVec(v2,u3))/(multiVec(v2,v2))
proy_v2_u3 = np.dot(v2,aux) 
aux_v3 = u3 - proy_v2_u3 - proy_v1_u3

#Para pasar los decimales a fracciones
v3 = []
print("\nVector v3:")
for i in range (0,len(aux_v3)):
    v3.append(frac.Fraction.from_float(aux_v3[i]).limit_denominator())
    print(v3[i])
