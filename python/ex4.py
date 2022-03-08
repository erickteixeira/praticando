def analisador(n1,n2):
    m = (n1+n2)/2.0
    if(m>=7):
        print("parabens voce passou com media {} \n".format(m))
    else:
        n3=float(input("informe a nota final"))
        mf = m + n3
        if(mf<10):
            print("voce foi reprovado na final\n")
        else:
            print("voce passou na final\n")

n1, n2 = [float(n1) for n1 in input("Enter two values: ").split()]
analisador(n1,n2)




