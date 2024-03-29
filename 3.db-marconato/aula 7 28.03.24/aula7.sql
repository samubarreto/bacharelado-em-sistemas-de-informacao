CREATE DATABASE aula7;
USE aula7;

CREATE TABLE departamento (
	codigo INT UNSIGNED NOT NULL,
    departamento VARCHAR(50) NOT NULL,
    CONSTRAINT PK_departmento PRIMARY KEY (codigo)
);

CREATE TABLE funcionario (
	id INT NOT NULL,
	nome VARCHAR(80) NOT NULL,
    sexo CHAR(1) NULL,
    nascimento DATE NULL,
    salario DECIMAL(8,2) NULL,
    cod_depto INT UNSIGNED NOT NULL,
    CONSTRAINT pk_funcionario PRIMARY KEY (id),
    CONSTRAINT chk_salario CHECK (salario > 0),
    CONSTRAINT fk_departamento FOREIGN KEY (cod_depto) REFERENCES departamento (codigo)
);

CREATE TABLE produto (
	codigo INT UNSIGNED NOT NULL PRIMARY KEY,
    descricao VARCHAR(40)
);

CREATE TABLE nfe (
	numero INT UNSIGNED NOT NULL PRIMARY KEY,
    emissao DATETIME
);

CREATE TABLE item_nfe (
	codigo INT UNSIGNED NOT NULL,
    numero INT UNSIGNED NOT NULL,
    quantidade INT NOT NULL,
    CONSTRAINT pk_item_nfe PRIMARY KEY (codigo, numero),
    CONSTRAINT fk_item_nfe FOREIGN KEY (codigo) REFERENCES produto (codigo),
    CONSTRAINT fk_item_nfe_nfe FOREIGN KEY (numero) REFERENCES nfe (numero)
);

SELECT * FROM departamento;
SELECT * FROM funcionario;
SELECT * FROM produto;
SELECT * FROM nfe;
SELECT * FROM item_nfe;

INSERT INTO departamento (codigo, departamento) VALUES
(1, 'Vendas'),
(2, 'Marketing'),
(3, 'RH'),
(4, 'Tecnologia'),
(5, 'Financeiro'),
(6, 'Logística'),
(7, 'Produção'),
(8, 'Administração'),
(9, 'Jurídico'),
(10, 'Atendimento ao Cliente'),
(11, 'Engenharia'),
(12, 'Qualidade'),
(13, 'Compras'),
(14, 'Comunicação'),
(15, 'Treinamento'),
(16, 'Design'),
(17, 'Serviços Gerais'),
(18, 'Contabilidade'),
(19, 'Pesquisa e Desenvolvimento'),
(20, 'Suporte Técnico');

INSERT INTO funcionario (id, nome, sexo, nascimento, salario, cod_depto) VALUES
(1, 'João Silva', 'M', '1990-01-01', 2500.00, 1),
(2, 'Maria Santos', 'F', '1988-05-12', 3200.00, 2),
(3, 'Pedro Oliveira', 'M', '1995-09-23', 2800.00, 3),
(4, 'Ana Pereira', 'F', '1987-03-04', 3500.00, 4),
(5, 'Luiz Souza', 'M', '1992-11-15', 3000.00, 5),
(6, 'Carla Mendes', 'F', '1986-07-26', 2700.00, 6),
(7, 'Rafael Lima', 'M', '1994-02-07', 3300.00, 7),
(8, 'Amanda Costa', 'F', '1989-08-18', 2900.00, 8),
(9, 'Fernando Santos', 'M', '1991-12-29', 2600.00, 9),
(10, 'Juliana Oliveira', 'F', '1985-06-10', 3400.00, 10),
(11, 'Marcos Silva', 'M', '1993-10-21', 3100.00, 11),
(12, 'Beatriz Almeida', 'F', '1984-04-01', 2800.00, 12),
(13, 'Felipe Souza', 'M', '1990-02-15', 3700.00, 13),
(14, 'Camila Pereira', 'F', '1983-11-26', 2600.00, 14),
(15, 'Gustavo Santos', 'M', '1988-07-07', 3200.00, 15),
(16, 'Mariana Lima', 'F', '1982-03-18', 2900.00, 16),
(17, 'Daniel Oliveira', 'M', '1989-09-29', 3100.00, 17),
(18, 'Patrícia Costa', 'F', '1981-04-10', 2800.00, 18),
(19, 'Rodrigo Santos', 'M', '1987-10-21', 3300.00, 19),
(20, 'Tatiane Alves', 'F', '1980-06-01', 3000.00, 20);

INSERT INTO produto (codigo, descricao) VALUES
(1, 'Camiseta'),
(2, 'Calça Jeans'),
(3, 'Tênis'),
(4, 'Relógio'),
(5, 'Celular'),
(6, 'Notebook'),
(7, 'Mochila'),
(8, 'Óculos de Sol'),
(9, 'Fone de Ouvido'),
(10, 'Bolsa'),
(11, 'Livro'),
(12, 'Cadeira'),
(13, 'Mesa'),
(14, 'Caneca'),
(15, 'Garrafa de Água'),
(16, 'Mouse'),
(17, 'Teclado'),
(18, 'Monitor'),
(19, 'Impressora'),
(20, 'Carregador de Celular');

INSERT INTO nfe (numero, emissao) VALUES
(1001, '2024-01-01 10:00:00'),
(1002, '2024-01-02 11:00:00'),
(1003, '2024-01-03 12:00:00'),
(1004, '2024-01-04 13:00:00'),
(1005, '2024-01-05 14:00:00'),
(1006, '2024-01-06 15:00:00'),
(1007, '2024-01-07 16:00:00'),
(1008, '2024-01-08 17:00:00'),
(1009, '2024-01-09 18:00:00'),
(1010, '2024-01-10 19:00:00'),
(1011, '2024-01-11 20:00:00'),
(1012, '2024-01-12 21:00:00'),
(1013, '2024-01-13 22:00:00'),
(1014, '2024-01-14 23:00:00'),
(1015, '2024-01-15 00:00:00'),
(1016, '2024-01-16 01:00:00'),
(1017, '2024-01-17 02:00:00'),
(1018, '2024-01-18 03:00:00'),
(1019, '2024-01-19 04:00:00'),
(1020, '2024-01-20 05:00:00');

INSERT INTO item_nfe (codigo, numero, quantidade) VALUES
(1, 1001, 5),
(2, 1002, 3),
(3, 1003, 7),
(4, 1004, 2),
(5, 1005, 4),
(6, 1006, 6),
(7, 1007, 8),
(8, 1008, 1),
(9, 1009, 10),
(10, 1010, 9),
(11, 1011, 12),
(12, 1012, 15),
(13, 1013, 20),
(14, 1014, 25),
(15, 1015, 30),
(16, 1016, 35),
(17, 1017, 40),
(18, 1018, 45),
(19, 1019, 50),
(20, 1020, 55);














