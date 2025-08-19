Algoritmo "Preço do terreno"
// Disciplina   : [Matemática Itinerário]
// Professor   : Igo Anderson
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/05/2025
Var
comp,larg,area,valor,preco:real
Inicio
escreval("Bem vindo ao programa de cálculo do valor de um terreno!")
escreva("Informe o comprimento do terreno:")
leia(comp)
escreva("Informe a largura do terreno:")
leia(larg)
area<-comp*larg
escreval("A área do terreno é ",area," metros quadrados")
escreva("Informe o valor do metro quadrado:")
leia(valor)
preco<-valor*area
escreva("O terreno vale ",preco:8:2," reais.")
Fimalgoritmo