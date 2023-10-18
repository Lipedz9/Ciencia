<?php
// Conectar ao banco de dados MySQL
$mysqli = new mysqli("127.0.0.1", "root", "", "projetoCRUD");

$sql = "SELECT * FROM clientes";
$result = $mysqli ->query($sql);



$nome = $_POST ['inputs'];
if ($result ->num_rows > 0) {
    while ($exibe = $result->fetch_assoc()) {
        echo "<tr>";    
        echo "<td>" . $exibe["nomeCompleto"] . "</td>";
        echo "<td>" . $exibe["email"] . "</td>";
        echo "<td>" . $exibe["cpf"] . "</td>";
        echo "<td>" . $exibe["endereco"] . "</td>";
        echo "<td>" . $exibe["dataNascimento"] . "</td>";
        echo "<td>" . $exibe["valorTotalCompra"] . "</td>";
        echo "<td>" . $exibe["numeroParcela"] . "</td>";
        echo "</tr>";
    }
}else{
    echo "<tr><td colspan='9'> Nenhum cliente cadastrado.</td></tr>";
}    

echo "</table>";

$mysqli->close();

?>