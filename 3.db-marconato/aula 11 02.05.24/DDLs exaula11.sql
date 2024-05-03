-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 ;
USE `mydb` ;
-- drop schema mydb;
-- -----------------------------------------------------
-- Table `mydb`.`grupos_produto`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`grupos_produto` (
  `id_grupo` INT NOT NULL,
  `nome_produto` VARCHAR(255) NOT NULL,
  PRIMARY KEY (`id_grupo`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`produtos`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`produtos` (
  `id_produto` INT UNSIGNED NOT NULL,
  `produto` VARCHAR(255) NOT NULL,
  `id_grupo` INT NOT NULL,
  PRIMARY KEY (`id_produto`),
  INDEX `fk_produtos_grupo_produto1_idx` (`id_grupo` ASC) VISIBLE,
  CONSTRAINT `fk_produtos_grupo_produto1`
    FOREIGN KEY (`id_grupo`)
    REFERENCES `mydb`.`grupos_produto` (`id_grupo`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`almoxarifados`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`almoxarifados` (
  `id_almoxarifado` INT NOT NULL,
  `almoxarifado` VARCHAR(255) NOT NULL,
  PRIMARY KEY (`id_almoxarifado`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`estoque`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`estoque` (
  `id_estoque_produto` INT UNSIGNED NOT NULL,
  `id_estoque_almoxarifado` INT NOT NULL,
  `data_cadastro` DATETIME NOT NULL,
  `quantidade_produto` INT NOT NULL,
  `valor_unitario` DECIMAL(8,2) NOT NULL,
  PRIMARY KEY (`id_estoque_produto`, `id_estoque_almoxarifado`),
  INDEX `fk_produtos_has_almoxarifados_almoxarifados1_idx` (`id_estoque_almoxarifado` ASC) VISIBLE,
  INDEX `fk_produtos_has_almoxarifados_produtos_idx` (`id_estoque_produto` ASC) VISIBLE,
  CONSTRAINT `fk_produtos_has_almoxarifados_produtos`
    FOREIGN KEY (`id_estoque_produto`)
    REFERENCES `mydb`.`produtos` (`id_produto`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_produtos_has_almoxarifados_almoxarifados1`
    FOREIGN KEY (`id_estoque_almoxarifado`)
    REFERENCES `mydb`.`almoxarifados` (`id_almoxarifado`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`telefones_almoxarifado`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`telefones_almoxarifado` (
  `id_almoxarifado` INT NOT NULL,
  `telefone` VARCHAR(15) NOT NULL,
  INDEX `fk_telefones_almoxarifado_almoxarifados1_idx` (`id_almoxarifado` ASC) VISIBLE,
  PRIMARY KEY (`id_almoxarifado`, `telefone`),
  CONSTRAINT `fk_telefones_almoxarifado_almoxarifados1`
    FOREIGN KEY (`id_almoxarifado`)
    REFERENCES `mydb`.`almoxarifados` (`id_almoxarifado`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

-- 3-) Escreva os DMLs para inserir os dados listados na(s) tabela(s) criada(s)

INSERT INTO almoxarifados (id_almoxarifado, almoxarifado) VALUES
(1, "Matriz"),
(2, "Filial 01"),
(3, "Filial 02");

SELECT * FROM almoxarifados;

INSERT INTO telefones_almoxarifado (id_almoxarifado, telefone) VALUES
(1, "3433 1519"),
(1, "3433 1520"),
(2, "3433 1216"),
(3, "3433 1720");

SELECT * FROM telefones_almoxarifado;

INSERT INTO grupos_produto (id_grupo, nome_produto) VALUES
(1, "Limpeza"),
(2, "Escritório");

INSERT INTO produtos (id_produto, produto, id_grupo) VALUES
(1, "Detergente", 1),
(2, "Papel A4", 2),
(3, "Lápis", 2),
(4, "Sabão Líquido", 1);

INSERT INTO estoque (id_estoque_produto, id_estoque_almoxarifado, data_cadastro, quantidade_produto, valor_unitario) VALUES
(1, 1, "2024-01-31", 50, 2.50),
(2, 1, "2024-02-15", 5000, 0.05),
(3, 1, "2023-04-30", 100, 2.00),
(1, 2, "2021-09-05", 20, 2.00),
(4, 2, "2024-02-25", 3, 10.13),
(2, 2, "2023-03-13", 500, 0.05),
(2, 3, "2023-08-17", 100, 0.05),
(3, 3, "2022-09-15", 30, 2.00);

delete from estoque;

-- 4-) Elabore um DQL que liste os produtos e quantidades de estoque do Almoxarifado da Matriz.
SELECT al.almoxarifado, pr.produto, es.quantidade_produto
FROM estoque es
JOIN almoxarifados al ON al.id_almoxarifado = es.id_estoque_almoxarifado
JOIN produtos pr ON pr.id_produto = es.id_estoque_produto
WHERE al.almoxarifado = "Matriz";

-- 5-) Elabore um DQL que liste o nome do Almoxarifado, o Produto e valor unitário dos produtos cujos estoque seja maior que 30 e menor que 1.000.
SELECT al.almoxarifado, pr.produto, es.valor_unitario
FROM estoque es
JOIN almoxarifados al ON al.id_almoxarifado = es.id_estoque_almoxarifado
JOIN produtos pr ON pr.id_produto = es.id_estoque_produto
WHERE es.quantidade_produto > 30 AND es.quantidade_produto < 1000;

-- 6-) Elabore um DQL que liste os produtos e sua quantidade total (de todos os almoxarifados) assim como seu valor total, sendo que o valor total não deve exibir casa decimais, mas deve ser o mais próximo possível do valor real.
SELECT al.almoxarifado, pr.produto, es.quantidade_produto, ROUND(es.quantidade_produto * es.valor_unitario, 0) as valor_total
FROM estoque es
JOIN almoxarifados al ON al.id_almoxarifado = es.id_estoque_almoxarifado
JOIN produtos pr ON pr.id_produto = es.id_estoque_produto
GROUP BY al.almoxarifado, pr.produto;

-- 7-) Elabore um DQL para exibir todos os produtos e seus grupos, cadastrados a mais de 180 dias.
SELECT pr.produto, gp.nome_produto, es.data_cadastro
FROM produtos pr
JOIN grupos_produto gp ON gp.id_grupo = pr.id_grupo
JOIN estoque es ON es.id_estoque_produto = pr.id_produto
WHERE DATEDIFF(NOW(), es.data_cadastro) > 180;

-- 8-) Escreva um DML que altere a data de cadastro de todos os produtos do grupo denominado Limpeza para hoje.
UPDATE estoque es
JOIN produtos pr ON pr.id_produto = es.id_estoque_produto
JOIN grupos_produto gp ON gp.id_grupo = pr.id_grupo
SET es.data_cadastro = NOW()
WHERE gp.id_grupo = 1;

-- 9-) Elabore um DML que apague todos os registros referentes à produtos do Almoxarifado Filial 01.
DELETE FROM almoxarifados al
WHERE al.id_almoxarifado = 2;












