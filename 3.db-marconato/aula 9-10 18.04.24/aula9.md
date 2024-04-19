# 18/04/2024 - Aula 9/10 - JOINS e FUNÇÕES

* Cross JOIN, JOIN ou Produto Cartesiano

  * Mesma coisa que apenas JOIN, simplesmente une tabelas
* Equi Join

  * Da pra filtrar legal o JOIN(CROSS JOIN) usando ON cl.codcidade = dr.codcidede
* Inner Join

  * Une tabelas com relacionamento
* Outer Join (Left e Right ao mesmo tempo)

  * Une tabelas com ou sem relacionamento, se não tiver retorna null no lugar
* Natural Join

  * Automaticamente faz o ON para colunas com os mesmos nomes, inútil
* Foreign Key

  * É o(s) campo(s) de uma tabela que permite o relacionamento entre diferentes tabelas

---



* FUNCS

  * Funções de valores simples:

    * ROUND(numero[ ,m]): Arredonda números com a precisão indicada
    * TRUNCATE(numero, [m]): Trunca números para que tenham uma certa quantidade de dígitos de precisão
    * SQRT(n): Retorna a raíz quadrada de n
  * Funções de grupos de valores:

    * AVG(n): Retorna a média de N, ignora nulos
    * COUNT(n): Retorna o contador da quantidade de n's, ignora nulls.. Se colocar *n conta os nulos tbm
    * MAX(n): Maior de n
    * MIN(n): Menor de n
    * SUM(n): Somatória de n
  * Funções que devolvem valores de caracteres:

    * CONCAT(string1, string2): Concatena duas strings
    * UPPER(string): Converte uma string para maiúsculas
    * LOWER(string): Converte uma string para minúsculas
    * SUBSTRING(string, start, length): Retorna uma parte de uma string, começando na posição especificada e com o comprimento especificado
    * REPLACE(string, from_substring, to_substring): Substitui todas as ocorrências de uma substring por outra em uma string
  * Funções que devolvem valores numéricos:

    * ABS(n): Retorna o valor absoluto de n
    * CEILING(n): Retorna o menor número inteiro maior ou igual a n
    * FLOOR(n): Retorna o maior número inteiro menor ou igual a n
    * POWER(n, exp): Retorna n elevado à potência exp
  * Funções para o manejo de datas:

    * DATEADD(intervalo, quantidade, data): Adiciona uma quantidade especificada de um intervalo de tempo a uma data
    * DATEDIFF(intervalo, data_inicial, data_final): Retorna a diferença entre duas datas em termos de um intervalo específico (dias, meses, anos, etc.)
    * DATEPART(intervalo, data): Retorna uma parte específica de uma data (ano, mês, dia, etc.)
    * GETDATE(): Retorna a data e hora atuais do sistema
  * Estrutura de condição:

    * IF(condição, valor_se_verdadeiro, valor_se_falso): Retorna um valor dependendo se a condição é verdadeira ou falsa
