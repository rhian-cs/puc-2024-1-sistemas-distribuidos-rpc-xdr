/*------------------------------------------------------------

HELLOPROG

*------------------------------------------------------------------*/

struct Livro {
  string nome<>;
  int codigo;
  float preco;
};

program HELLOPROG {               /* nome do programa  */
  version HELLOVERS {             /* declaração da versão */

    int HELLO(string msg<>)= 1;   /* procedimento remoto */
    int Consulta(Livro l)= 2;
  } = 1;                   /* número da versão do programa   */
} = 0x30090949;            /* número do programa (deve ser único) */

