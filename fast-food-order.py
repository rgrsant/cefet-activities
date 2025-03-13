pedido = str(input("Qual lanche você quer? \nSegue nossas opções: \n1 - X-salada \n2 - Egg-x-salada \n3 - X-tudo \nEscolha com seus respectivos números"))

if(pedido == "1"):
  print("X-salada: R$3,00")
elif(pedido == "2"):
  print("Egg-x-salada: R$4,00")
elif(pedido == "3"):
  print("X-tudo: 5,00")
else:
  print("No momento não temos")
     