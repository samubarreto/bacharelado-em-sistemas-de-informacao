# 02/05/2024 - Aula 11

* Primeira Forma Normal (1NF): Garante valores atômicos em cada coluna.
* Segunda Forma Normal (2NF): Atributos não-chave dependem totalmente da chave primária. Deve estar presente na primeira forma normal.
* Terceira Forma Normal (3NF): Não há dependências transitivas entre atributos não-chave. Deve estar presente na segunda forma normal.
* Quarta Forma Normal (4NF): Não pode conter mais de uma dependência multivalorada. Deve estar presente na terceira forma normal;
* Quinta Forma Normal (5NF): O conteúdo não pode ser reconstituído por tabelas menores com chaves diferentes. Deve estar presente na quarta forma normal.
* Languages:
  * DDL: Linguagem de Definição de Dados. Usada para definir a estrutura e layout dos dados em um banco de dados. Exemplos incluem CREATE, ALTER e DROP para criar, alterar e excluir tabelas e outros objetos de banco de dados.
  * DML: Linguagem de Manipulação de Dados. Usada para manipular os dados dentro de um banco de dados. Exemplos incluem INSERT para adicionar novos dados, UPDATE para modificar dados existentes e DELETE para remover dados.
  * DQL: Linguagem de Consulta de Dados. Usada para recuperar dados de um banco de dados. Exemplos incluem SELECT, que é usado para consultar informações de uma ou mais tabelas.
  * DCL: Linguagem de Controle de Dados. Usada para controlar o acesso aos dados dentro do banco de dados. Exemplos incluem GRANT para conceder privilégios de acesso e REVOKE para revogar esses privilégios.
  * DTL: Linguagem de Transações de Dados. Este termo não é tão comum quanto os anteriores. Normalmente, em sistemas de banco de dados, as transações são gerenciadas por meio de comandos específicos da linguagem de manipulação de dados (DML), como COMMIT para confirmar uma transação ou ROLLBACK para desfazer uma transação. No entanto, o contexto específico pode alterar essa definição.
