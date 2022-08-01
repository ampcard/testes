#include <iostream>

class Usuario{
  public: 
    int idade;
    std::string primeiroNome;
    std::string sobreNome;
};
int main() {
  Usuario usrObj1;
  Usuario usrObj2;
  system("clear");
  std::cout << "Digite sua idade.\nMinha idade é: ";
  std::cin >> usrObj1.idade;
  system("clear");
  std::cout << "Digite seu primeiro nome. \nMeu primeiro nome é: ";
  std::cin >> usrObj1.primeiroNome;
  system("clear");
  std::cout << "Agora digite seu sobrenome.\nMeu sobrenome é: ";
  std::cin >> usrObj1.sobreNome;
  system("clear");
  // FINALIZAÇÃO DA OBTENÇÃO DE DADOS

  std::cout << "Usuário, seu nome completo é " << usrObj1.primeiroNome << " " << usrObj1.sobreNome << ".\n Você tem " << usrObj1.idade << " anos de idade!\n\n Agora digite a idade do segundo usuário: ";
  std::cin >> usrObj2.idade;
  int total = usrObj1.idade + usrObj2.idade;
  std::cout << "A soma da idade de vocês é " << total << " anos de idade!";
}