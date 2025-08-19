Algoritmo "retângulo"
// Disciplina   : [Matemática Itinerário]
// Professor   : Igo Anderson
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2025
Var
   base,alt,area,perim,diag:real
Inicio
   escreval("Bem vindo ao programa de cálculo de área, perímetro e diagonal de um retângulo!")
   escreva("Informe a base do retângulo:")
   leia(base)
   escreva("Informe a altura do retângulo:")
   leia(alt)
   area<-base*alt
   perim<-2*base+2*alt
   diag<-raizq(base^2+alt^2)
   escreval("A área do retângulo vale ",area)
   escreval("O perímetro do retângulo vale ",perim)
   escreval("A diagonal do retângulo vale ",diag)
Fimalgoritmo