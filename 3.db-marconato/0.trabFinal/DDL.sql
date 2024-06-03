
-- -----------------------------------------------------
-- Schema trabfinal
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS trabfinal DEFAULT CHARACTER SET utf8 ;
USE trabfinal ;

-- -----------------------------------------------------
-- Tabela regioes
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS regioes (
  id INT NOT NULL,
  regiao VARCHAR(45) NOT NULL,
  CONSTRAINT pk_regioes PRIMARY KEY (id))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Tabela estados
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS estados (
  uf CHAR(2) NOT NULL,
  estado VARCHAR(50) NOT NULL,
  id INT NOT NULL,
  CONSTRAINT pk_estados PRIMARY KEY (uf),
  INDEX fk_estados_regioes_idx (id ASC),
  CONSTRAINT fk_estados_regioes
    FOREIGN KEY (id)
    REFERENCES regioes (id))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Tabela municipios
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS municipios (
  codigo INT NOT NULL,
  uf CHAR(2) NOT NULL,
  municipio VARCHAR(80) NOT NULL,
  populacao INT NOT NULL,
  CONSTRAINT pk_municipios PRIMARY KEY (codigo),
  INDEX fk_municipio_estado_idx (uf ASC),
  CONSTRAINT fk_municipio_estado
    FOREIGN KEY (uf)
    REFERENCES estados (uf))
ENGINE = InnoDB;

