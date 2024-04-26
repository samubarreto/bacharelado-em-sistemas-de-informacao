CREATE DATABASE exAula10;
DROP DATABASE exAula10;
USE exAula10;

CREATE TABLE cidades (
	id_cidade INT UNSIGNED NOT NULL,
    descricao_cidade VARCHAR(50) NOT NULL,
    CONSTRAINT PK_cidade PRIMARY KEY (id_cidade)
) ENGINE = InnoDB;
DROP TABLE cidades;

CREATE TABLE departamentos (
	id_departamento INT UNSIGNED NOT NULL,
    descricao_departamento VARCHAR(50) NOT NULL,
    telefone_departamento VARCHAR(15),
    id_cidade_departamento INT UNSIGNED NOT NULL,
    CONSTRAINT PK_departamento PRIMARY KEY (id_departamento),
    CONSTRAINT FK_cidade_departamento FOREIGN KEY (id_cidade_departamento) REFERENCES cidades (id_cidade)
) ENGINE = InnoDB;
DROP TABLE departamentos;

CREATE TABLE funcionarios (
	id_funcionario INT UNSIGNED NOT NULL,
    nome_funcionario VARCHAR(80) NOT NULL,
    data_nascimento_funcionario DATE NOT NULL,
    sexo_funcionario CHAR,
    data_admissao_funcionario DATE NOT NULL,
    salario_funcionario DECIMAL (8,2),
    id_departamento_funcionario INT UNSIGNED NOT NULL,
    CONSTRAINT PK_funcionario PRIMARY KEY (id_funcionario),
    CONSTRAINT FK_departamento_funcionario FOREIGN KEY (id_departamento_funcionario) REFERENCES departamentos(id_departamento)
) ENGINE = InnoDB;
DROP TABLE funcionarios;

INSERT INTO cidades VALUES
(1, 'Marília'),
(2, 'Vera Cruz'),
(3, 'Pompéia'),
(4, 'Garça');
SELECT * FROM cidades;

INSERT INTO departamentos VALUES
(10, 'Diretoria', '(14) 3433 1515', 1),
(20, 'RH', '(14) 3433 1516', 1),
(30, 'TI', '(14) 3492 1718', 2),
(40, 'TI', '(14) 3471 1821', 4),
(50, 'Vendas', '(14) 3471 1822', 4);
SELECT * FROM departamentos;

INSERT INTO funcionarios VALUES
(100, 'Ana', '1980-05-15', 'F', '2010-03-01', 7500, 10),
(200, 'Maria', '1978-12-13', 'F', '2012-09-15', 3938.12, 10),
(300, 'José', '1997-03-08', 'M', '2009-03-05', 5200, 20),
(400, 'Aparecido', '1979-06-25', 'M', '2011-04-10', 7385.59, 30),
(500, 'Marcia', '1985-02-03', 'F', '2010-03-01', 3500, 40),
(600, 'Orlando', '1983-12-25', 'M', '2012-06-10', 2754.15, 20);
SELECT * FROM funcionarios;

-- 3 -) Escreva o comando DQL que liste todos os campos e todos os registros da tabela cidade.
DESCRIBE cidades;
SELECT * FROM cidades;

-- 4 -) Escreva o comando DQL que liste os campos iddepartamento, descrição e idcidade da tabela departamento onde a descrição é igual a TI.
SELECT dpto.id_departamento, dpto.descricao_departamento, dpto.id_cidade_departamento
FROM departamentos dpto
WHERE dpto.descricao_departamento = "TI";

-- 5 -) Escreva o comando DQL que liste os campos nome e sexo da tabela funcionário que trabalham nos departamentos onde o iddepartamento é maior ou igual a 20.
SELECT func.nome_funcionario, func.sexo_funcionario
FROM funcionarios func
WHERE func.id_departamento_funcionario >= 20;

-- 6 -) Escreva o comando DQL que exiba os campos nome e data de admissão, da tabela funcionário, somente os funcionários admitidos no ano de 2010.
SELECT func.nome_funcionario, func.data_admissao_funcionario
FROM funcionarios func
WHERE YEAR(func.data_admissao_funcionario) = '2010';

-- 7 -) Escreva o comando DQL que exiba todos os campos e registros da tabela funcionário onde o salário é maior que 3.500,00 e do sexo Feminino.
SELECT *
FROM funcionarios func
WHERE func.salario_funcionario > 3500
	  AND func.sexo_funcionario = 'F';

-- 8 -) Escreva o DML para alterar o salário em 10% de todos os funcionários onde o iddepartamento é igual a 20.
UPDATE funcionarios func
SET func.salario_funcionario = func.salario_funcionario * 1.1
WHERE func.id_departamento_funcionario = 20;

-- 9 -) Escreva o DML para alterar a data de admissão para a data de hoje do funcionário onde o idfuncionario é 500.
UPDATE funcionarios func
SET func.data_admissao_funcionario = DATE(NOW())
WHERE func.id_funcionario = 500;

-- 10 -) Escreva o DML para apagar o registro da tabela cidade onde a descrição é igual a Pompéia.
DELETE FROM cidades cd
WHERE cd.descricao_cidade = "Pompéia";

-- Desafio:
-- 1-) Escreva o comando DQL que exiba a descricao e a soma de salários dos funcionários de cada um dos departamentos.
SELECT dpto.descricao_departamento, SUM(func.salario_funcionario)
FROM funcionarios func
JOIN departamentos dpto ON dpto.id_departamento = func.id_departamento_funcionario
GROUP BY dpto.descricao_departamento;

-- 2-) Escreva o comando DQL que exiba o nome de cada cidade e a quantidade de funcionarios que lá trabalham.
SELECT cd.descricao_cidade, COUNT(dpto.id_departamento)
FROM cidades cd
JOIN departamentos dpto ON dpto.id_cidade_departamento = cd.id_cidade
GROUP BY cd.descricao_cidade;

/*
SELECT cd.descricao_cidade, COUNT(func.id_funcionario)
FROM cidades cd
JOIN departamentos dpto ON dpto.id_cidade_departamento = cd.id_cidade
JOIN funcionarios func ON func.id_departamento_funcionario = dpto.id_departamento
GROUP BY cd.descricao_cidade;
*/