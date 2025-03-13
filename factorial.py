numero = int(input("Entre com um número inteiro: "))

mult = 1

for x in range (1, numero + 1):
  mult = mult * x

else:
  print("Resultado: ", mult)
  print("Último número: ", numero)