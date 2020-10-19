#include "Empregado.hpp"

#define ACRESCIMO_HORA_EXTRA 0,5

void Empregado::setNome(std::string nome) { this->nome = nome; }
std::string Empregado::getNome() { return this->nome; }

void Empregado::setSalarioHora(double valor) { this->salarioHora = valor; }
double Empregado::getSalarioHora() { return this->salarioHora; }

void Empregado::setQuotaMensalVendas(double valor) { this->quotaMensalVendas = valor; }
double Empregado::getQuotaMensalVendas() { return this->quotaMensalVendas;}

double Empregado::pagamentoMensal(double horasTrabalhadas) {
    
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if(horasTrabalhadas > 8) {
        double horasExtras = horasTrabalhadas - 8;
        horasTrabalhadas += horasExtras * ACRESCIMO_HORA_EXTRA;
    }
    return horasTrabalhadas * this->salarioHora;

}