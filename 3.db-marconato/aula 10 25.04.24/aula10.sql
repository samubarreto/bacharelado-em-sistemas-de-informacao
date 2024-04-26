CREATE DATABASE funcoes;
USE funcoes;

SELECT NOW(), DAY(NOW()), YEAR(NOW()), DATE(NOW());

SELECT TRUNCATE(DATEDIFF(NOW(), '2004-04-11')/365);

CREATE TABLE pessoas (
id_pessoa INT UNSIGNED NOT NULL,
nome_pessoa VARCHAR(50) NOT NULL,
salario_pessoa DECIMAL(8,2),
cargo_pessoa TEXT,
CONSTRAINT PK_pessoa PRIMARY KEY (id_pessoa)
);
DROP TABLE pessoas;

INSERT INTO pessoas VALUES
(1, 'Samuel', 'Pereira Barreto', 1520, 'QA');

SELECT * FROM pessoas;