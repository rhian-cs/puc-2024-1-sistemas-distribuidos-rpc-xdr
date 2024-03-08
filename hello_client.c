/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "hello.h"

void helloprog_1(char *host)
{
	CLIENT *clnt;
	int *result_1;
	char *hello_1_arg = "Hello, world!";
	int *result_2;
	Livro consulta_1_arg;

#ifndef DEBUG
	clnt = clnt_create(host, HELLOPROG, HELLOVERS, "udp");
	if (clnt == NULL)
	{
		clnt_pcreateerror(host);
		exit(1);
	}
#endif /* DEBUG */

	result_1 = hello_1(&hello_1_arg, clnt);
	if (result_1 == (int *)NULL)
	{
		clnt_perror(clnt, "call failed");
	}

	consulta_1_arg.nome = "The Lord of the Rings";
	consulta_1_arg.codigo = 123;
	consulta_1_arg.preco = 999.99;

	result_2 = consulta_1(&consulta_1_arg, clnt);
	if (result_2 == (int *)NULL)
	{
		clnt_perror(clnt, "call failed");
	}
#ifndef DEBUG
	clnt_destroy(clnt);
#endif /* DEBUG */
}

int main(int argc, char *argv[])
{
	char *host;

	if (argc < 2)
	{
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	helloprog_1(host);
	exit(0);
}
