# Trabalho de Lógica Matemática  
Este repositório contém a implementação de um trabalho prático envolvendo **funções lógicas** e **latches** utilizando a linguagem **C++**.

## Conteúdo  
O código implementa a função **NAND** e um **latch** utilizando portas NAND, simulando o comportamento de um **registro de 8 bits** (utilizando a estrutura `bitset` para representar números binários) e aplicando a lógica de controle de um **flip-flop**.

Principais conceitos abordados:  
- Função **NAND** como operação lógica fundamental  
- Implementação de um **latch** (flip-flop) com portas NAND  
- Conversão de valores **decimais** para **binários**  
- Utilização de laços e controle de fluxo para simular a evolução de estados em um sistema digital

### Fluxo de execução:  
1. O código solicita ao usuário que insira um número decimal entre 0 e 255.  
2. O valor decimal é convertido para binário utilizando o tipo `bitset<8>`.  
3. A função **latch** é chamada para cada bit da representação binária do número inserido.  
4. A função **NAND** é aplicada em diversas etapas dentro do **latch** para controlar o estado do sistema.  
5. O sistema simula a alteração dos estados de um latch a partir dos bits do número binário.


