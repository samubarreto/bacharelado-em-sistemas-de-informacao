use aula12dql;

desc estado;
select * from estado;

alter table estado add column cadastro date null;
alter table estado drop column cadastro;

update estado
set cadastro = '2024-05-09'
where uf = "SP";

select * from item_nfe;
drop table item_nfe;

create index i_produto_descricao ON produto (descricao);
drop index i_produto_descricao ON produto;

select * from produto order by descricao;

select * from produto;

create or replace view produto5 as
select * from produto where valor_unitario > 5;

select * from produto5;

create view clientenfe as
select cl.nome, cl.cep, ceps.logradouro, cl.numero "nro casa", b.descricao, cd.nome as "cidade", es.nome as "estado", nfe.numero as "nota fiscal", nfe.data
from cliente cl
join ceps on ceps.cep = cl.cep
join bairro b on b.idbairro = ceps.idbairro
join cidade cd on cd.idcidade = b.idcidade
join estado es on es.uf = cd.uf
join nfe on nfe.idcliente = cl.idcliente;

select * from clientenfe;
