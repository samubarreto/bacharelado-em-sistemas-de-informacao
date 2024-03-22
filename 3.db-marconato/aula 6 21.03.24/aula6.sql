CREATE DATABASE teste;
DROP DATABASE teste;

USE teste;

CREATE TABLE teste (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50),
    idade INT,
    email VARCHAR(100)
);

INSERT INTO teste VALUES (1, 'samu', 19, 'samu.barreto');
INSERT INTO teste VALUES (23, 'teste', 193, 'email');

SELECT * FROM teste;