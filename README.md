Super Trunfo – Cadastro e Batalha de Cartas
Descrição do Projeto
Este projeto implementa um jogo de Super Trunfo em C, permitindo cadastrar cartas com atributos de cidades e realizar comparações entre elas.
No nível avançado, além de cadastrar e calcular densidade populacional e PIB per capita, o programa calcula o Super Poder de cada carta e compara todas as cartas atributo por atributo.
Funcionalidades
Nível Básico
Cadastro de cartas com os seguintes atributos:
Estado
Código
Nome da cidade
População
Área
PIB
Número de pontos turísticos
Armazenamento dos dados em variáveis apropriadas (unsigned long int, float, int, char[]).
Nível Intermediário
Cálculo de:
Densidade populacional: população ÷ área
PIB per capita: PIB ÷ população
Exibição desses valores junto com os demais atributos da carta.
Nível Avançado (Novo)
Cálculo do Super Poder:
Fórmula:
Copiar código

Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)
Observação: atenção à conversão de tipos (população para float).
Comparação de cartas:
Compara atributo por atributo:
População, área, PIB, pontos turísticos, PIB per capita, Super Poder → vence quem tiver maior valor
Densidade populacional → vence quem tiver menor valor
Exibição do resultado das comparações:
Copiar código

Comparação de Cartas:
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
Tecnologias Utilizadas
Linguagem C
Compilador GCC ou similar
Estrutura do Código
Entrada dos dados das cartas (duas cartas)
Cálculo de densidade populacional e PIB per capita
Cálculo do Super Poder
Comparação dos atributos
Exibição dos resultados das comparações