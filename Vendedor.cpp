#include <string>
#include "Empregado.hpp"

#define MESES_EM_1_ANO 12

class Vendedor : public Empregado {

  public: 	  
	double quotaTotalAnual() {
	  return this->getQuotaMensalVendas() * MESES_EM_1_ANO;
	}
	
};

