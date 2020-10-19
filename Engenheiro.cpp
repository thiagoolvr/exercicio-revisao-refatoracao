#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private: 
	  int numProjetos;

  public:
    void setNumProjetos(int valor) { this->numProjetos = valor; }
    int getNumProjetos() { return this->numProjetos; }
	
};

