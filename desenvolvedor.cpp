#include "header.h"
#include <iostream>

void desenvolvedor::setQuantidadeDeProjetos(int qt){ // método para definir quantidade de projetos
    quantidadeDeProjetos = qt;
}

int desenvolvedor::getQuantidadeDeProjetos(){ // método para retornar quantidade de projetos
    return quantidadeDeProjetos;
}

float desenvolvedor::calcularSalarioFinal(){ // método para calcular salário final
    float salarioFinal = salarioBase + (500 * quantidadeDeProjetos);
    return salarioFinal;
}

void desenvolvedor::exibirInfo(){ //método para exibir as informações
    std::cout << "ID: " << getId() << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Tipo: Desenvolvedor" << std::endl;
    std::cout << "Projetos: " << getQuantidadeDeProjetos() << std::endl;
    std::cout << "Salario Base: " << getSalarioBase() << std::endl;
    std::cout << "Salario Final: " << calcularSalarioFinal() << std::endl;
}