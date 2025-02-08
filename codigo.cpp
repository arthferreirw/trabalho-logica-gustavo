
#include <cstdlib>
#include <bitset>
#include <iostream> 

using namespace std;

bool nand(bool entrada1, bool entrada2) {
    return !(entrada1 && entrada2);
}

bool latch(bool clock, bool estadoAnterior, bool dadoEntrada) {
    bool dadoNegado = nand(dadoEntrada, dadoEntrada);          // Negação do dadoEntrada
    bool nand1 = nand(dadoEntrada, clock);                    // Primeira NAND
    bool nand2 = nand(dadoNegado, clock);                     // Segunda NAND
    bool estadoIntermediario = nand(nand1, estadoAnterior);   // Terceira NAND
    bool proximoEstado = nand(nand2, estadoIntermediario);    // Quarta NAND
    return proximoEstado;                                     // Retorna o valor atualizado
}

int main(int argc, char** argv) {
        int valorDecimal;
    cout << "Digite um valor decimal (0 a 255): ";
    cin >> valorDecimal;

    if (valorDecimal < 0 || valorDecimal > 255) {
        cerr << "O valor deve estar entre 0 e 255!" << endl;
        return 1;
    }

    bitset<8> valorBinario(valorDecimal);
    cout << "Valor digitado pelo usuário: " << valorDecimal << endl;
    cout << "Valor em binário: " << valorBinario << endl;

    
    bool estadoAtual = 0;
    cout << " Chamadas à função:" << endl;
    for (int i = 0; i < 8; ++i) {
        bool bitAtual = valorBinario[7 - i]; 
        cout << "latch(clock=1, estadoAtual=" << estadoAtual << ", dadoEntrada=" << bitAtual << ")" << endl;
        estadoAtual = latch(1, estadoAtual, bitAtual); 
    }

    cout << "Retorno das chamadas: ";
    for (int i = 0; i < 8; ++i) {
        bool bitAtual = valorBinario[7 - i];
        estadoAtual = latch(0, estadoAtual, bitAtual);
        cout << estadoAtual;
    }
    cout << endl;

    
 
    
    
    
    
    return 0;
}