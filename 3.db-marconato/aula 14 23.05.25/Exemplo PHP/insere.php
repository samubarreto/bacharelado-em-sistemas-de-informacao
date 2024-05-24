<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd"> 
<html xmlns="http://www.w3.org/1999/xhtml"> 
<head> 
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /> 
<title>Pesquisa Estado</title> 
</head>   
<body>
<?php
// recebe os valores enviados no form
$uf   = $_POST ["uf"];
$nome = $_POST ["nome"];
// Define variáveis com os dados para conexao ao banco de dados
$host    = "localhost";
$usuario = "root";
$senha   = "";
$banco   = "auladql";
// Conecta ao SGBD Mysql
$conexao = mysqli_connect($host,$usuario,$senha) or die ("Nao foi possivel conectar ao SGBD!");
// Seleciona o banco de dados
mysqli_select_db($conexao,$banco) or die ("Banco de dados inexistente $banco");

// Define a query e passa os parametros
$sql = "INSERT INTO estado (uf,nome) VALUES ('$uf','$nome')";
// Executa a query e testa se não houve erro na execução
if (!mysqli_query($conexao,$sql)) {
    // Exibe o código do erro
    printf("Erro: %d\n", mysqli_errno($conexao));
}
else {
   printf("<p>Cadastro realizado!</p>");
}

mysqli_close($conexao);

?>
</body>
</html>
