<?php
// Inclui o arquivo de conexão
require_once 'conexao.php';

// Verifica se o formulário foi submetido
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $nome_receita = $_POST['nome_receita'];
    $tempo_preparo = $_POST['tempo_preparo'];
    $qtd_pessoas = $_POST['qtd_pessoas'];
    $descricao = $_POST['descricao'];
    $ingredientes = $_POST['ingredientes'];
    $modo_preparo = $_POST['modo_preparo'];
    
    // Para upload de imagem
    $imagem = $_FILES['imagem']['name'];
    $imagem_tmp = $_FILES['imagem']['tmp_name'];
    $imagem_pasta = 'imagens/' . $imagem;
    
    // Move a imagem para a pasta
    if (move_uploaded_file($imagem_tmp, $imagem_pasta)) {
        // Prepara e executa a query de inserção
        $stmt = $mysqli->prepare("INSERT INTO receitas (nome_receita, tempo_preparo, qtd_pessoas, descricao, ingredientes, `modo de preparo`, imagem) VALUES (?, ?, ?, ?, ?, ?, ?)");
        $stmt->bind_param('ssissss', $nome_receita, $tempo_preparo, $qtd_pessoas, $descricao, $ingredientes, $modo_preparo, $imagem_pasta);
        
        if ($stmt->execute()) {
            echo "Receita cadastrada com sucesso!";
        } else {
            echo "Erro ao cadastrar a receita: " . $stmt->error;
        }
        
        $stmt->close();
    } else {
        echo "Erro ao fazer upload da imagem.";
    }
}
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <title>Cadastrar Receita</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <h2>Cadastro de Receita</h2>
    <form action="" method="POST" enctype="multipart/form-data">
        <label for="nome_receita">Nome da Receita:</label>
        <input type="text" name="nome_receita" id="nome_receita" required><br><br>
        
        <label for="tempo_preparo">Tempo de Preparo:</label>
        <input type="text" name="tempo_preparo" id="tempo_preparo" required><br><br>
        
        <label for="qtd_pessoas">Quantidade de Pessoas:</label>
        <input type="number" name="qtd_pessoas" id="qtd_pessoas" required><br><br>
        
        <label for="descricao">Descrição:</label>
        <textarea name="descricao" id="descricao" required></textarea><br><br>
        
        <label for="ingredientes">Ingredientes:</label>
        <textarea name="ingredientes" id="ingredientes" required></textarea><br><br>
        
        <label for="modo_preparo">Modo de Preparo:</label>
        <textarea name="modo_preparo" id="modo_preparo" required></textarea><br><br>
        
        <label for="imagem">Imagem da Receita:</label>
        <input type="file" name="imagem" id="imagem" accept="image/*"><br><br>
        
        <input type="submit" value="Cadastrar Receita">
    </form>
</body>
</html>
