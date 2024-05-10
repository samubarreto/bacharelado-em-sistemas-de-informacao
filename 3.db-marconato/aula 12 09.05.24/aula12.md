# 09/05/2024 - Aula 12

* DDL: Linguagem de Definição de Dados. Usada para definir a estrutura e layout dos dados em um banco de dados. Exemplos incluem CREATE, ALTER e DROP para criar, alterar e excluir tabelas e outros objetos de banco de dados.
  * CREATE: suave;
  * ALTER: suave;
  * DROP: suave.

```sql
ALTER TABLE <nometabela>
ADD COLUMN <nomedacoluna> <tipodedado>
ADD CONSTRAINT <nomeconstraint> <constraint>
MODIFY COLUMN <nomecoluna> <tipodedado>
DROP COLUMN <nomecoluna>
```

```sql
DROP TABLE <nometabela>
DROP INDEX <nomeindex> ON <nometabela>
```

* índices
  * Estruturas opcionais associadas a tablea que permitem:
    * Consultas SQL mais rapidamente
    * Garantir um valor único em uma coluna
  * Fortemente indicado para aumentar a performance
  * Índice para coluna que for PK é indispensável
  * índice e tabela são objetos

```sql
CREATE UNIQUE INDEX nome_index ON tabela ([coluna(s)]);
CREATE INDEX i_produto_descricao ON produto(descricao);
```

* View
  * Serve para recuperação e manipulação de dados, porém, sem armazená-los
  * Tem linhas e colunas geradas dinamicamente por meio de um select pré-estabelecido, sempre que buscado
  * Apenas a definição é armazenada

```sql
CREATE OR REPLACE VIEW <nomeview> AS <[sql]>
CREATE OR REPLACE VIEW produto5 AS SELECT * FROM produto WHERE valor_unitario > 5
DESCRIBE produto5
```

* (NOT) LIKE
  * LIKE -> % substitui td e _ substitui um caractere só
* BETWEEN
  * Entre, durante.. Bom pra datas
* IN
  * Busca por valores dentro de um (1, l2, 3);
* IS NULL
  * é nulo, óbvio
