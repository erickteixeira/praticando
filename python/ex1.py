print("=== ACHAR DUAS VARIAVEIS DE UM SISTEMA LINEAR ===\n")

#a, b, c, d, e, f = int(input("favor digitar os numeros A B C D E F na respectiva ordem usando uma linha\n").split())
a, b, c, d, e, f = [int(a) for a in input("Entre com os valores: ").split()]

y = ((f-d*c/a))/((-d*b)/(a+e))
x = ((c -b *y))/a

print("o valor de y é: ", y)
print("o valor de x é: ", x)
