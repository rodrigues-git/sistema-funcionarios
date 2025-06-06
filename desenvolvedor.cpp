#include "header.h"
#include <iostream>

void desenvolvedor::setQuantidadeDeProjetos(int qt){
    quantidadeDeProjetos = qt;
}

int desenvolvedor::getQuantidadeDeProjetos(){
    return quantidadeDeProjetos;
}

float desenvolvedor::calcularSalarioFinal(){
    float salarioFinal = salarioBase + (500 * quantidadeDeProjetos);
    return salarioFinal;
}

void desenvolvedor::exibirInfo(){
    std::cout << "ID: " << getId() << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Tipo: Desenvolvedor" << std::endl;
    std::cout << "Projetos: " << getQuantidadeDeProjetos() << std::endl;
    std::cout << "Salario Base: " << getSalarioBase() << std::endl;
    std::cout << "Salario Final: " << calcularSalarioFinal() << std::endl;
}