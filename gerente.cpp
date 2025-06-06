#include "header.h"
#include <iostream>

void gerente::setBonusMensal(float bonus){
    bonusMensal = bonus;
}

float gerente::getBonusMensal(){
    return bonusMensal;
}

float gerente::calcularSalarioFinal(){
    float salarioFinal = salarioBase + bonusMensal;
    return salarioFinal;
}

void gerente::exibirInfo(){
    std::cout << "ID: " << getId() << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Tipo: Gerente" << std::endl;
    std::cout << "Bonus: " << getBonusMensal() << std::endl;
    std::cout << "Salario Base: " << getSalarioBase() << std::endl;
    std::cout << "Salario Final: " << calcularSalarioFinal() << std::endl;
}