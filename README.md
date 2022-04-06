# Contador de Instruções

Projeto de programação em C com o objetivo de aplicar uma série de regras e assim criar um contador de instruções a ser utilizado em uma matriz.

### Explicação do código
O programa recebe um valor inteiro *n* do usuário e cria uma matriz quadrada [*n*]x[*n*] com valores aleatórios de 0 a 99, que por sua vez serão percorridos seguindo uma série de instruções:

1. O caminho sempre parte da posição inicial [0][0] e vai até a posição final [*n*][*n*].
2. O próximo valor a ser percorrido pode ser o situado imediatamente à direita, esquerda ou abaixo do valor corrente.
3. O caminho não poderá voltar a valores já percorridos ou situados acima do valor corrente.
4. Ao percorrer por um valor que se encontra na última linha, o caminho deve ser feito apenas para a direita, até a posição final.

Os valores percorridos serão somados e apresentados ao final do programa, bem como a matriz antes e após ser percorrida, com o valor 'X' representando o caminho realizado.
