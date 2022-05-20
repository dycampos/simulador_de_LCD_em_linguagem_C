# Simulador_de_LCD_em_linguagem_C
O Simulador pode ser usado para uma prototipagem rápida em linguagem C de um modelo de LCD, com a intenção de ser replicado em um LCD real controlado por um microcontrolador.

O LCD é simulado com o uso de uma matriz de tamanho definido pelo usuário na chamada da função lcdBegin. Todas as funções realizam operações sobre essa matriz, com exceção da função printLCD, que imprimi no console os valores armazenados.

## Referência das Funções
* `lcdBegin(int col, int row)` - Inicializa o LCD. A função recebe os parâmetros do número de colunas (col) e de linhas (row) e aloca dinamicamenta memória para gerar o LCD. Esta função precisa ser chamada antes de qualquer outra função do LCD. Cada elemento do LCD recebe um caracter em branco para melhorar a visualização do tamanho do LCD no console;

* `clearLCD()` - limpa todas as linhas e colunas do LCD. Para todas as posições são atribuídas o caracter em branco;

* `clearPositionLCD(int col, int row)` - limpa uma posição específica do LCD, atribuia a essa posição o caracter em branco. Recebe como parâmetros a coluna (col) e a linha (row) da posição que se deseja apagar;

* `writeLCD(int col, int row, char *message)` - escreve uma mensagem na matrix LCD. Esta mensagem deve ter o tamanho máximo da largura do LCD, ou seja, número de colunas. Para este caso a posição inicial da coluna deve ser igual a zero para ocupar todo o espaço do LCD. Nos casos onde a posição inicial da coluna for diferente de zero, deve-se levar em consideração este deslocamento para saber o tamanho máximo da mensagem a ser reproduzida;

* `printLCD()` - imprimi os valores no LCD. Esta função imprimi no console a matriz LCD;

## Exemplo LCD 16x4
1. Inicializa uma matriz de 4 linhas por 16 colunas:

`lcdBegin(16, 4);`  

2. Escreve o texto Simulador de LCD na última linha, iniciando na primeira coluna. É importante destacar que as linhas e colunas iniciam no zero. Assim as linhas disponíveis, para um display 14x4, são de 0-15 e as colunas de 0-3.

`writeLCD(0, 3, "Simulador de LCD");` 

3. Imprimi o LCD no console:

`printLCD();`

*Resultado no console:*

![image](https://user-images.githubusercontent.com/105655939/169608565-a8b7c202-f2cd-4197-8761-389e08807478.png)

4. Apaga o caracter da posição 7 da linha 2, no caso apaga a letra d do simulador:

`clearPositionLCD(7, 2);`

5. Imprimi o LCD no console:

`printLCD();`

*Resultado no console:*

![image](https://user-images.githubusercontent.com/105655939/169608341-70d23c4b-7557-49eb-bc9a-22ab9b2a3451.png)

6. Limpa todos os valores do LCD:

`clearLCD();`

7. Imprimi o LCD no console:

`printLCD();`
 
 *Resultado no console:*
 
 ![image](https://user-images.githubusercontent.com/105655939/169608907-1f227391-6d11-490c-8c7d-2b57a3d03d75.png)

