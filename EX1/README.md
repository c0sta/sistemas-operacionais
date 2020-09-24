# Atividade 1

##  Exercicio 1
*Elabore um programa em **Linux** que crie um processo e execute um segundo programa.*
<details>

  <summary>a) Explique o código fonte utilizado</summary>
    Através do método fork() criamos um processo filho a partir do processo Pai. Caso o ID seja menor que 0, quer dizer que houve algum erro na inicialização do processo, caso seja igual a 0, o processo filho foi iniciado com sucesso
</details>

<details>
  <summary>b) Descreva os resultados obtidos</summary>
    Foi exibido no terminal o PID do processo Pai

    ![EXE1-exerc1](https://user-images.githubusercontent.com/36762964/94067805-c3494e00-fdc4-11ea-8ca9-b6cc54142208.png)
</details>

## Exercicio 2 
*Elabore um programa em **Windows** que crie um processo e execute um segundo programa.*
<details>

<summary>a) Explique o código fonte utilizado </summary>
  Através da lib *windows.h*, usamos o método **CreateProcess**, que nos retorna um novo processo.
  Se o processo for criado com sucesso irá retornar o PROCESS_INFORMATION, uma estrutura contendo algumas informações sobre o processo, como seu id e alguns handlers.
  Após isso, é exibido uma mensagem de sucesso ou falha na criação do processo e em seguida o  método WaitForSingleObject() aguarda a finalização da execução do processo Filho.
</details>

<details>

<summary>
  b) Descreva os resultados obtidos 
</summary>

  Após a execução do código é exibido a mensagem de "Processo criado" e o Paint é aberto.

  ![exerc1](https://user-images.githubusercontent.com/36762964/93955896-2f757480-fd27-11ea-9da1-fd20f2fb8320.png)

</details>

## Exercicio 3
*Elabore um programa em **Java** que crie um processo e execute um segundo programa.*
<details>
  <summary>a) Explique o código fonte utilizado</summary>

</details>
<details>
  <summary>b) Descreva os resultados obtidos</summary>
  </details>

## Exercicio 4 
*Elabore um programa em **Python** que crie um processo e execute um segundo programa.*
<details>
<summary>a) Explique o código fonte utilizado</summary>
   Através do módulo OS podemos utilizar o método fork(), que é utilizado para criar novos processos. Para verificar o PID ( Process Id) utilizamos o método getpid(), também da lib OS.
</details>

<details>
  <summary>b) Descreva os resultados obtidos</summary>

  O ID do processo Pai e Filho são retornados no terminal

</details>
