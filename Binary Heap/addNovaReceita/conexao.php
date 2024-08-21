<?php
$servidor = "localhost"; 
$banco = "cadastro_usuarios"; 
$usuario = "root";
$senha = ""; 

$mysqli = new mysqli($servidor, $usuario, $senha, $banco);

if ($mysqli->connect_errno) {
  echo "Conexão falhou: (" . $conn->connect_errno .")" . $conn->connect_errno;
}
else
    echo "Conectado";

?>