Algoritmo "Duração"
// Disciplina   : [Matemática Itinerário]
// Professor   : Igo Anderson 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/05/2025
Var
// Seção de Declarações das variáveis 
temp,hora,minuto,segundo:inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite o tempo total em segundos:")
leia(temp)
segundo<-temp mod 60
minuto<-temp\60
hora<-minuto\60
minuto<-minuto%60
escreva("O tempo de ",temp," segundos é equivalente a ",hora," horas, ",minuto," minutos e ",segundo," segundos.")

Fimalgoritmo