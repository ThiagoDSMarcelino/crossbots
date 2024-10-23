# Processo Seletivo CROSSBOTS - UTFPR

## Como rodar

```bash
    clear && gcc ./main.c && ./a.out
```

## Explicação do código

No começo do código tem as funções para mexer com um array como se fosse uma matriz, fiz isso porque acho que fica mais eficiente o código, já que até onde sei o OS sempre pega os dados próximos ao que você pediu e manda junto para o cache da CPU (Não tenho muita certeza sobre isso, mas já estudei um pouco sobre isso e foi isso que entendi).

Depois disso tenho a função de calcular um itinerário, fiz somente essa parte do programa separada por conta dela ficar em um loop, ou seja, eu já sou obrigado a colocar 2 níveis de indentação (um para a função main e outro para o for), e como na função tem mais níveis ainda acho que assim fica melhor de se ler o código.

O resto do programa fica dentro da main por pura questão de facilidade e velocidade na hora de programar, poderia ter sido separado em arquivos e mais funções, só que achei que seria demais para um programa relativamente simples.
Tentei manter o terminal o mais parecido possível com o dá print que estava junto do documento e escolhi fazer o código em inglês por uma questão de não ser necessário usar acentos para escrever as palavras e elas não ficarem esquisitas.
