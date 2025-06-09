#include "header.h"
#include <iostream>

void gerente::setBonusMensal(float bonus){ // método para definir bonus mensal
    bonusMensal = bonus;
}

float gerente::getBonusMensal(){ // método para retornar bonus mensal
    return bonusMensal;
}

float gerente::calcularSalarioFinal(){ // método para calcular salário final
    float salarioFinal = salarioBase + bonusMensal;
    return salarioFinal;
}

void gerente::exibirInfo(){ // método para exibir informações
    std::cout << "ID: " << getId() << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Tipo: Gerente" << std::endl;
    std::cout << "Bonus: " << getBonusMensal() << std::endl;
    std::cout << "Salario Base: " << getSalarioBase() << std::endl;
    std::cout << "Salario Final: " << calcularSalarioFinal() << std::endl;
}