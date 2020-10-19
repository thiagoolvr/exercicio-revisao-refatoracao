#include "Engenheiro.cpp"
#include "Vendedor.cpp"

using namespace std;

int main() {

  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalarioHora(35);
  eng1.setNumProjetos(3); 
  cout << "Nome: " << eng1.getNome() << endl;
  cout << "Salario Mes: " << eng1.pagamentoMensal(9.5) << endl;
  cout << "Projetos: " << eng1.getNumProjetos() << endl;
  cout << endl;

  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalarioHora(30);
  eng2.setNumProjetos(1); 
  cout << "Nome: " << eng2.getNome() << endl;
  cout << "Salario Mes: " << eng2.pagamentoMensal(8) << endl;
  cout << "Projetos: " << eng2.getNumProjetos() << endl;
  cout << endl;

  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalarioHora(30);
  eng3.setNumProjetos(2); 
  cout << "Nome: " << eng3.getNome() << endl;
  cout << "Salario Mes: " << eng3.pagamentoMensal(8) << endl;
  cout << "Projetos: " << eng3.getNumProjetos() << endl;
  cout << endl;
  
  Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setSalarioHora(20);
  vend1.setQuotaMensalVendas(5000);
  
  cout << "Nome: " << vend1.getNome() << endl;
  cout << "Salario Mes: " << vend1.pagamentoMensal(6) << endl;  
  cout << "Quota vendas: " << vend1.quotaTotalAnual() << endl;
  cout << endl;

  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalarioHora(25);
  vend2.setQuotaMensalVendas(3000);
  
  cout << "Nome: " << vend2.getNome() << endl;
  cout << "Salario Mes: " << vend2.pagamentoMensal(8) << endl;  
  cout << "Quota vendas: " << vend2.quotaTotalAnual() << endl;
  cout << endl;

  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalarioHora(30);
  vend3.setQuotaMensalVendas(4000);
  
  cout << "Nome: " << vend3.getNome() << endl;
  cout << "Salario Mes: " << vend3.pagamentoMensal(8) << endl;  
  cout << "Quota vendas: " << vend3.quotaTotalAnual() << endl;
  cout << endl;  
  
  return 0;	
}