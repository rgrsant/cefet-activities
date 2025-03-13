minimo = int(input("Mínimo: "))
maximo = int(input("Máximo: "))

soma = 0

for numero in range (minimo, maximo + 1):
  soma = soma + numero

else:
  print("Resultado: ", soma)
  print("Último número: ", numero)