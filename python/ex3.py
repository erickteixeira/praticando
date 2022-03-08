print("=== programa para apontar o maior de tres numeros ===\n")

x, y, z = [float(x) for x in input("Enter three values: ").split()]

if (x>y and x>z):
    print("x é o maior valor\n")
else:
    if(y>x and y>z):
        print("y é o maior valor\n")
    else:
        print("z é o maior valor\n")
