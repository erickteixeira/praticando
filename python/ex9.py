def pato():
    i=1
    for i in 40000000:
        print("{}" .format(i))
        c = input("sua resposta: ")
        if((i%4==0)or(i%10==4)):
            switch(c):
                case 'n':
                    print("bebe vinho, pato\n")
                    i=5000000000
                case 'p':
                    break

print("bem vindo ao jogo do pato\n")
print("regras:\npara numeros multiplos de 4 ou que terminarem em 4 digite p e os demais digite n\n")
pato()
