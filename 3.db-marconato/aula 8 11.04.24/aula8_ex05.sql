-- 1 -> Crie um banco de dados denominado ex05.
CREATE DATABASE ex05;
DROP DATABASE ex05;
USE ex05;

-- 2 -> Crie uma tabela chamada departamento, com os seguintes campos: Código inteiro sem sinal, chave primária; Descrição string com 50 posições não aceita valores nulos.

CREATE TABLE departamento (
	codigo INT UNSIGNED NOT NULL,
    descricao VARCHAR(50) NOT NULL,
    CONSTRAINT PK_codigo PRIMARY KEY (codigo)
)ENGINE InnoDb;

-- 3 -> Crie uma tabela denominada funcionário, com os seguintes campos: Registro inteiro sem sinal, chave primária; Nome string com 80 posições, não aceita valores nulos; Nascimento data, não aceita valores nulos; Código campo igual da tabela departamento, chave estrangeira, aceita valores nulos.

CREATE TABLE funcionario (
	registro INT UNSIGNED NOT NULL,
    nome VARCHAR(80) NOT NULL,
    data_nascimento DATE NOT NULL,
    codigo INT UNSIGNED NULL,
    CONSTRAINT PK_registro PRIMARY KEY (registro),
    CONSTRAINT FK_dpto FOREIGN KEY (codigo) REFERENCES departamento(codigo)
)ENGINE InnoDb;

DESCRIBE funcionario;

-- 4 -> Altere a tabela funcionário e acrescente um novo campo com o nome salário, que aceite valores nulos, deve armazenar salários com valores de até 999.999,99 (novecentos e noventa e nove mil e novecentos e noventa e nove Reais e noventa e nove centavos)
ALTER TABLE funcionario 
ADD COLUMN salario DECIMAL(8,2);

-- 5 -> Exclua a tabela funcionário.
DROP TABLE funcionario;