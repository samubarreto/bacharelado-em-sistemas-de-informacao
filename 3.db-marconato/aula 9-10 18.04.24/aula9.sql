CREATE DATABASE aula9;
DROP DATABASE aula9;
USE aula9;

CREATE TABLE cidades (
	cod_cidade INT UNSIGNED NOT NULL,
    nome_cidade VARCHAR(35) NOT NULL,
    CONSTRAINT PK_cod_cidade PRIMARY KEY (cod_cidade)
);

CREATE TABLE pessoas (
	id_pessoa INT UNSIGNED NOT NULL,
    nome_pessoa VARCHAR(75) NOT NULL,
    idade_pessoa INT,
    salario_pessoa DECIMAL(9,2),
    telefone_pessoa VARCHAR(15),
    cod_cidade INT NOT NULL,
    CONSTRAINT PK_pessoa PRIMARY KEY (id_pessoa),
    CONSTRAINT FK_cod_cidade FOREIGN KEY (cod_cidade) REFERENCES cidades(cod_cidade)
);

INSERT INTO pessoas (id_pessoa, nome_pessoa, idade_pessoa, salario_pessoa, telefone_pessoa, cod_cidade) VALUES
	(1, "Samuel", 20, 1520.00, 14997973585, 1),
    (2, "João", 22, 6500.00, 14999999999, 2),
    (3, "Manoel", 210, 10.00, 1499123585, 2),
    (4, "Marconato", 2230, 320.00, 14997123685, 4),
    (5, "Renata", 210, 1320.00, 14987653585, 1);

INSERT INTO cidades (cod_cidade, nome_cidade) VALUES
	(1, "Marília"),
    (2, "Massachussets"),
    (3, "Xique-Xique"),
    (4, "Pompéia");
    
SELECT *
FROM pessoas pe
JOIN cidades cd
	ON pe.cod_cidade = cd.cod_cidade;
    
CREATE TABLE empresas (
	id_empresa INTEGER NOT NULL,
	nome_empresa VARCHAR(35) NOT NULL,
	cnpj_empresa VARCHAR(50) NOT NULL,
	ie_empresa VARCHAR(20),
	telefone_empresa VARCHAR(15),
	cod_cidade_empresa INTEGER NOT NULL,
	id_gerente_empresa INTEGER,
	CONSTRAINT PK_Empresa PRIMARY KEY (id_empresa),
	CONSTRAINT FK_Empresa_Cidade FOREIGN KEY (cod_cidade_empresa) REFERENCES cidades (cod_cidade),
	CONSTRAINT FK_Empresa_Pessoa FOREIGN KEY (id_gerente_empresa) REFERENCES pessoas (id_pessoa)
);

INSERT INTO empresas (id_empresa, nome_empresa, cnpj_empresa, ie_empresa, telefone_empresa, cod_cidade_empresa, id_gerente_empresa) VALUES
(510, 'RJS Tecnologia', '24.454.242/0001-01', 1524213, '235273642', 1, 4),
(617, 'Scan Sistemas', '18.182.801/0001-01', 1823427, '248339192', 2, 3),
(627, 'Scam', '18.182.801/0001-01', 1823427, '248339192', 3, null),
(85, 'PlayHard', '23.021.901/0001-01', 1398014, '215374591', 4, 1);

SELECT *
FROM empresas emp
INNER JOIN pessoas pe
	ON emp.id_gerente_empresa = pe.id_pessoa
INNER JOIN cidades cd
	ON emp.cod_cidade_empresa = cd.cod_cidade;
    
SELECT *
FROM empresas emp
LEFT OUTER JOIN pessoas pe
	ON emp.id_gerente_empresa = pe.id_pessoa
LEFT OUTER JOIN cidades cd
	ON emp.cod_cidade_empresa = cd.cod_cidade;
    
SELECT *
FROM empresas emp
RIGHT OUTER JOIN pessoas pe
	ON emp.id_gerente_empresa = pe.id_pessoa
RIGHT OUTER JOIN cidades cd
	ON emp.cod_cidade_empresa = cd.cod_cidade;