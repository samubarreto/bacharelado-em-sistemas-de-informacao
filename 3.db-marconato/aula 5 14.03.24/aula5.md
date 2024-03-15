# 14/03/2024 - Aula 5 - Normalização

Normalização -> Extinguir colunas de valores compostos ou multivalorados.

* Desmembrar colunas compostas ou multivaloradas em mais de uma coluna

Formas normais:

* Primeira Forma Normal (1NF): Garante valores atômicos em cada coluna.
* Segunda Forma Normal (2NF): Atributos não-chave dependem totalmente da chave primária. Deve estar presente na primeira forma normal.
* Terceira Forma Normal (3NF): Não há dependências transitivas entre atributos não-chave. Deve estar presente na segunda forma normal.
  * Quarta Forma Normal (4NF): Não pode conter mais de uma dependência multivalorada. Deve estar presente na terceira forma normal;
  * Quinta Forma Normal (5NF): O conteúdo não pode ser reconstituído por tabelas menores com chaves diferentes. Deve estar presente na quarta forma normal.
