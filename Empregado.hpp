#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    std::string nome;
    double salarioHora;  
    double quotaMensalVendas;  

  public:
    void setNome(std::string nome);
    std::string getNome();

    void setSalarioHora(double valor);
    double getSalarioHora();

    void setQuotaMensalVendas(double valor);
    double getQuotaMensalVendas();

    double pagamentoMensal(double horasTrabalhadas);

};

#endif