# 07/03/2024 - Modelo Relacional > Normalização

* Normalização em bancos de dados:
  * Organiza os dados de forma eficiente.
  * Reduz a redundância e dependência entre os dados.
  * Divisão de tabelas em estruturas menores e coesas.
  * Estabelecimento de relações claras entre as tabelas.
* Formas normais:
  * Primeira Forma Normal (1NF): Garante valores atômicos em cada coluna.
  * Segunda Forma Normal (2NF): Atributos não-chave dependem totalmente da chave primária. Presente na primeira forma normal.
  * Terceira Forma Normal (3NF): Não há dependências transitivas entre atributos não-chave. Presente na segunda forma normal.
* Benefícios:
  * Menos redundância e dependência nos dados.
  * Melhora o desempenho e a facilidade de manutenção.
* Considerações:
  * Normalização excessiva pode aumentar a complexidade das consultas.
  * Equilíbrio entre normalização e desempenho é crucial conforme os requisitos do sistema.
* Exemplo:
  * Separar uma coluna "emails" na tabela pessoa, composta por mais de um email em uma tabela "email_pessoa", com um id seguido dos email, sendo possível separar por coluna "email1, email2, email3.."
  * Caso for cadastrar apenas 1 email sempre, não tem necessidade dessa outra tabela e etc..
* Exemplo:
  * Separar uma coluna "endereço" em várias outras, rua, logradouro, cidade, uf, cep..

> 1:N Tracejado -> Não identificado

> 1:N Não tracejado -> Identificador
