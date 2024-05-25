const inputReservista = document.getElementById('reservista');

function verificarSexoIdade() {
  const valorIdade = 2024 - (document.getElementById('anoNascimento').value);
  const valorSexo = document.getElementById('sexo').value;
  console.log(valorIdade, valorSexo)
  if (valorIdade >= 18 && valorSexo == 'homem') {
    inputReservista.readOnly = false;
    inputReservista.placeholder = 'Digite seu nº de Reservista'
    console.log('ok')
  } else {
    inputReservista.readOnly = true;
    inputReservista.placeholder = 'Deve ser homem com mais de 18 anos'
    console.log('not ok')
  }
}