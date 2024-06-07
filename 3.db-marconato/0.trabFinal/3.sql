SELECT
	ROUND (
		AVG (
			(SELECT SUM(mu.populacao) FROM municipios mu WHERE mu.municipio LIKE 'São João%')
		), 2
	) AS 'Média da população das cidades São Joãos%';
    
    
-- SELECT ROUND(AVG(SUM(mu.populacao)), 2) AS 'Média São Joãos'
-- FROM municipios mu
-- WHERE mu.municipio LIKE 'São João%'

SELECT ROUND(AVG(mu.populacao), 2) AS 'Média população das cidades São João%'
FROM municipios mu
WHERE mu.municipio LIKE 'São João%';