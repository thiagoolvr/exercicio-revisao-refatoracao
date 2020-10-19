#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalarioHora(35);
  eng1.setNumProjetos(3); 
  std::cout << "Nome: " << eng1.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMensal(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.getNumProjetos() << std::endl;
  std::cout << std::endl;

  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalarioHora(30);
  eng2.setNumProjetos(1); 
  std::cout << "Nome: " << eng2.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMensal(8) << std::endl;
  std::cout << "Projetos: " << eng2.getNumProjetos() << std::endl;
  std::cout << std::endl;

  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalarioHora(30);
  eng3.setNumProjetos(2); 
  std::cout << "Nome: " << eng3.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMensal(8) << std::endl;
  std::cout << "Projetos: " << eng3.getNumProjetos() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setSalarioHora(20);
  vend1.setQuotaMensalVendas(5000);
  
  std::cout << "Nome: " << vend1.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMensal(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalarioHora(25);
  vend2.setQuotaMensalVendas(3000);
  
  std::cout << "Nome: " << vend2.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMensal(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalarioHora(30);
  vend3.setQuotaMensalVendas(4000);
  
  std::cout << "Nome: " << vend3.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMensal(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;
  std::cout << std::endl;  
  
  return 0;	
}