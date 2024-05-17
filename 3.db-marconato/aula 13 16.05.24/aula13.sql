USE aula12dql;

SELECT * 
FROM nfe
WHERE numero IN (SELECT numero FROM item_nfe WHERE quantidade >= 10);
			
SELECT *
FROM nfe
WHERE numero IN (1,3,4);

SELECT cidade.idcidade, cidade.nome, cidade.uf, TB.Qtde_Bairro
FROM cidade
JOIN (SELECT idcidade, COUNT(*) AS Qtde_Bairro FROM bairro GROUP BY idcidade) TB ON (cidade.idcidade = TB.idcidade);

SELECT
produto.descricao,
produto.valor_unitario,
(SELECT AVG(valor_unitario) FROM produto) Media
FROM produto;

SELECT numero, data, (SELECT SUM(quantidade * valor_unitario)
					  FROM item_nfe
                      JOIN produto ON (item_nfe.idproduto = produto.idproduto) WHERE item_nfe.numero = nfe.numero) as Total
FROM nfe;

SELECT 
    valor_unitario,
    CASE 
        WHEN valor_unitario < 2 THEN 'Baixo'
        WHEN valor_unitario >= 2 AND valor_unitario <= 5 THEN 'Médio'
        WHEN valor_unitario > 5 THEN 'Alto'
    END AS categoria
FROM produto;

