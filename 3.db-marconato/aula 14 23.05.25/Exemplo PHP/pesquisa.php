<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd"> 
<html xmlns="http://www.w3.org/1999/xhtml"> 
<head> 
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /> 
<title>Pesquisa Estado</title> 
</head>   
<body>
<?php
// recebe os valores enviados no form
$uf = $_POST ["uf"];
// Define variáveis com os dados para conexao ao banco de dados
$host    = "localhost";
$usuario = "root";
$senha   = "";
$banco   = "auladql";
// Conecta ao SGBD Mysql
$conexao = mysqli_connect($host,$usuario,$senha) or die ("Nao foi possivel conectar ao SGBD!");
// Seleciona o banco de dados
mysqli_select_db($conexao,$banco) or die ("Banco de dados inexistente $banco");
// Query que será executada, passando o parametro da consulta enviado pelo formulario
$sql = "SELECT nome
          FROM estado
         WHERE uf = '$uf'";
// Execução da Query
$lista = mysqli_query($conexao,$sql);
// Numero total de registros da tabela
$total = mysqli_num_rows(mysqli_query($conexao,$sql));
// Testa se retornou algum registro na execução da query
if ($total > 0){
    while (list($nome)=mysqli_fetch_row($lista)){
       printf("<p> UF: $uf - $nome </p>");   
    }
}
else{
    printf("<p>Nenhum Estado encontrado para UF: $uf </p>");

}; // fim do if
mysqli_close($conexao);

?>
</body>
</html>
