# Exercício 1

Um restaurante gostaria de informatizar os pedidos que chegam via telefone para entrega na casa do cliente, sendo que cada cliente realiza o seu pedido informando os nomes e quantidade dos pratos, bebidas e sobremesas desejados. Cada prato possui um código, nome, e seus ingredientes e tamanho do prato/porção e valor unitário. Algumas bebidas além do código, nome e valor unitário, possuem a informação de quantos ml ou litros vem na embalagem. Para que o pedido possa ser atendido corretamente o restaurante solicita mais algumas informações como nome do cliente, endereço de entrega, forma de pagamento, necessidade e valor de troco, data e hora do pedido e o valor total de seu pedido.

Elabore o modelo entidade relacionamento, inclua os atributos de cada entidade, os relacionamentos entre as entidades e a cardinalidade com as devidas restrições.

* Entidade Prato

| cod_prato | nome_prato | ingredientes_prato | tamanho_prato | valor_unit_prato |
| --------- | ---------- | ------------------ | ------------- | ---------------- |

* Entidade bebida

| cod_bebida | nome_bebida | valor_unit_bebida | volume_embalagem |
| ---------- | ----------- | ----------------- | ---------------- |

* Entidade cliente

| nome_cliente | end_entrega | forma_pagamento | necessidade | valor_troco | data_hora | valor_total |
| ------------ | ----------- | --------------- | ----------- | ----------- | --------- | ----------- |

* Entidade pedido

| cod_pedido | nome_cliente | end_entrega | forma_pagamento | valor_total | valor_troco |
| ---------- | ------------ | ----------- | --------------- | ----------- | ----------- |
