import os

# Metodo para criar um processo com o metodo fork()
n = os.fork()

# Se for diferente de 0, entao e um processo filho
if n > 0: 
    print("Processo fiho - ", os.getpid()) 
else: 
    # Se for igual a 0, entao e um Processo Pai
    print("Processo pai", os.getpid()) 
