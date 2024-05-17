-- Samuel Pereira Barreto, 638217 - Resuluções exercícios DQL (EX07)
USE auladql;

-- 1) Elabore o comando DQL que exiba o nome e uf da cidade e o nome estado.
SELECT cd.nome AS 'Cidade', es.uf AS 'UF', es.nome AS 'Estado'
FROM estado es
JOIN cidade cd ON cd.uf = es.uf;

-- 2) Elabore o comando DQL que exiba o CEP e logradouro da tabela ceps, a descrição do bairro e nome da cidade e uf da tabela cidade, filtrando somente a cidade de Marília.
SELECT ceps.cep AS 'CEP', ceps.logradouro AS 'Logradouro', b.descricao AS 'Bairro', cd.nome AS 'Cidade', cd.uf AS 'UF'
FROM bairro b
JOIN cidade cd ON b.idcidade = cd.idcidade
JOIN ceps ON ceps.idbairro = b.idbairro
WHERE cd.idcidade = 1; -- <- ID de Marília

-- 3) Elabore o comando DQL que exiba o nome do cliente e a quantidade de notas fiscais de cada cliente.
SELECT cl.nome, COUNT(nfe.numero) AS "Qtd de NFEs"
FROM cliente cl
LEFT JOIN nfe on nfe.idcliente = cl.idcliente
GROUP BY cl.nome;

-- 4) Elabore o comando DQL que exiba o valor total de cada nota fiscal do cliente com o nome Joca.
SELECT nfe.numero AS 'NFE', TRUNCATE(SUM(item_nfe.quantidade * pr.valor_unitario), 2) AS 'Valor total dos itens'
FROM nfe
JOIN cliente cl ON cl.idcliente = nfe.idcliente
JOIN item_nfe ON item_nfe.numero = nfe.numero
JOIN produto pr ON pr.idproduto = item_nfe.idproduto
WHERE cl.nome = 'Joca'
GROUP BY nfe.numero;

-- 5) Elabore o comando DQL que exiba o nome e o endereço completo (logradouro, número, complemento, descrição do bairro, nome da cidade e nome estado) da nota fiscal número 4.
SELECT cl.nome AS 'Cliente', ceps.logradouro AS 'Logradouro', cl.numero AS 'Número', COALESCE(cl.complemento, 'Sem complemento') AS 'Complemento', bairro.descricao AS 'Bairro', cd.nome AS 'Cidade', es.nome AS 'Estado'
FROM cliente cl
JOIN ceps ON cl.cep = ceps.cep
JOIN bairro ON bairro.idbairro = ceps.idbairro
JOIN cidade cd ON cd.idcidade = bairro.idcidade
JOIN estado es ON es.uf = cd.uf;
 
-- 6) Elabore o comando DQL que exiba o nome do cliente, número e data da nota, descrição do produto, quantidade, valor unitário de valor total do produto da nota -- fiscal de número 1.
SELECT cl.nome AS 'Cliente', nfe.numero AS 'Num_NFE', nfe.data AS 'Data_Nota', pr.descricao AS 'Produto', TRUNCATE(item_nfe.quantidade, 0) AS 'Quantidade', pr.valor_unitario AS 'Unitário', TRUNCATE(SUM(item_nfe.quantidade * pr.valor_unitario), 2) AS 'Valor Total'
FROM produto pr
JOIN item_nfe ON item_nfe.idproduto = pr.idproduto
JOIN nfe ON nfe.numero = item_nfe.numero
JOIN cliente cl ON cl.idcliente = nfe.idcliente
WHERE nfe.numero = 1
GROUP BY pr.descricao;

-- 7) Elabore o comando DQL que exiba o nome, valor unitário do produto de número 1 e a quantidade e valor total de todas as notas deste produto.
SELECT pr.idproduto AS 'ID', pr.descricao AS 'Produto', pr.valor_unitario AS 'Valor_Unitário', TRUNCATE(SUM(item_nfe.quantidade), 0) AS 'Quantidade_Vendas', TRUNCATE(SUM(item_nfe.quantidade * pr.valor_unitario), 2) AS 'Valor_Total_Produto'
FROM produto pr
JOIN item_nfe ON item_nfe.idproduto = pr.idproduto
WHERE pr.idproduto = 1;

-- 8) Elabore o comando DQL que exiba o nome da cidade e todas as ufs e nome dos estados.
SELECT es.uf AS 'UF', es.nome AS 'Estado', COALESCE(cd.nome, 'Sem cidade cadastrada') AS 'Cidade'
FROM estado es
LEFT JOIN cidade cd ON cd.uf = es.uf
ORDER BY es.uf;

-- 9) Elabore o comando DQL que exiba o maior valor unitário entre todos os produtos.
SELECT pr.descricao AS 'Produto+Caro', pr.valor_unitario AS 'Preço'
FROM produto pr
WHERE pr.valor_unitario = (SELECT MAX(valor_unitario) FROM produto);

-- 10) Elabore o comando DQL que exiba somente as três primeiras letras do nome de cada cliente, exiba o resultado em caixa alta (maiúsculo).
SELECT UPPER(SUBSTRING(cl.nome, 1, 3)) AS '3 Primeiras letras Cliente maiúsculas'
FROM cliente cl;