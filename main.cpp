#include "header.h"
#include <iostream>
#include <limits> 

int main() {

    funcionario* funcionarios[10];  //vetor de ponteiros para armazenar ate 10 funcionarios
    int total = 0;

    std::cout << "----------Cadastro de Funcionarios----------" << std::endl;

    while (total < 10){ //loop de cadastro até atingir o limite de 10 ou o usuario encerrar

        int tipo;

        std::cout << std::endl;

        std::cout << "-----Pressione 1 para cadastrar um desenvolvedor, 2 para cadastrar um gerente, 3 para cadastrar um estagiario e 0 para encerrar-----" << std::endl;
        
        std::cin >> tipo;

        std::cout << std::endl;

        if(tipo == 0){ //encerra o cadastro se o usuario digitar 0
            break;
        }

        else if (tipo == 1){ //cadastro de desenvolvedor
            desenvolvedor* dev = new desenvolvedor();

            int id, projetos;
            std::string nome;
            float salarioBase;

            std::cout << "---Desenvolvedor---" << std::endl;

            std::cout << "ID: ";
            std::cin >> id;
            dev->setId(id);

            std::cout << "Nome: ";
            std::cin.ignore();
            std::getline(std::cin, nome);
            dev->setNome(nome);

            std::cout << "Quantidade de projetos: ";
            std::cin >> projetos;
            dev->setQuantidadeDeProjetos(projetos);

            std::cout << "Salario base: ";
            std::cin >> salarioBase;
            dev->setSalarioBase(salarioBase);

            funcionarios[total] = dev; //armazena no vetor
            total++;  
        }
        
        //cadastro de gerente
        else if(tipo == 2){
            gerente* grt = new gerente();

            int id;
            std::string nome;
            float salarioBase;
            float bonus;

            std::cout << "---Gerente---" << std::endl;

            std::cout << "ID: ";
            std::cin >> id;
            grt->setId(id);

            std::cout << "Nome: ";
            std::cin.ignore();
            std::getline(std::cin, nome);
            grt->setNome(nome);

            std::cout << "Bonus: ";
            std::cin >> bonus;
            grt->setBonusMensal(bonus);

            std::cout << "Salario base: ";
            std::cin >> salarioBase;
            grt->setSalarioBase(salarioBase);

            funcionarios[total] = grt;
            total++;
        }

        //cadastro de estagiário
        else if(tipo == 3){
            estagiario* estg = new estagiario();

            int id;
            std::string nome;
            float salarioBase;
            int horas;

            std::cout << "---Estagiario---" << std::endl;

            std::cout << "ID: ";
            std::cin >> id;
            estg->setId(id);

            std::cout << "Nome: ";
            std::cin.ignore();
            std::getline(std::cin, nome);
            estg->setNome(nome);

            std::cout<<"Horas Trabalhadas: ";
            std::cin >> horas;
            estg->setHorasTrabalhadas(horas);

            std::cout << "Salario base: ";
            std::cin >> salarioBase;
            estg->setSalarioBase(salarioBase);

            funcionarios[total] = estg;
            total++; 
        }

        //tipo invalido caso o usuario digite qualquer numero diferente
        else{
            std::cout << "Tipo invalido" << std::endl;
        }
    }


    //exibe as informacoes ou uma mensagem se não houver funcionários
    if(total == 0){
        std::cout << "Nenhum funcionario cadastrado" << std::endl;
    }

    else{
        std::cout << "------Funcionarios------" << std::endl;

        for (int i = 0; i < total; i++) {
            funcionarios[i]->exibirInfo();
            std::cout << std::endl;
        }
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();


    //libera a memoria alocada
    for (int i = 0; i < total; i++) {
        delete funcionarios[i];
    }

    return 0;
}
